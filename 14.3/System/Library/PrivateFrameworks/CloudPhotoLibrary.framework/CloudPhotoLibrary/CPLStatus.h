@class NSData, NSDate, NSArray, CPLAccountFlags, NSURL, NSMutableDictionary, NSDictionary, NSObject;
@protocol CPLStatusDelegate, OS_dispatch_queue;

@interface CPLStatus : NSObject {
    BOOL _forCPL;
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
}

@property (copy, nonatomic) NSDate *lastCompletePrefetchDate;
@property (copy, nonatomic) NSDate *lastPruneDate;
@property (nonatomic) BOOL hasChangesToProcess;
@property (nonatomic) BOOL iCloudLibraryClientVersionTooOld;
@property (copy, nonatomic) NSDate *lastSuccessfulSyncDate;
@property (copy, nonatomic) NSDate *initialSyncDate;
@property (nonatomic) BOOL isExceedingQuota;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property (nonatomic) BOOL iCloudLibraryExists;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (readonly, nonatomic) NSDate *cloudAssetCountPerTypeLastCheckDate;
@property (nonatomic) BOOL lowDiskSpace;
@property (copy, nonatomic) NSArray *disabledFeatures;
@property (readonly, nonatomic) BOOL hasValidSystemBudget;
@property (readonly, nonatomic) BOOL hasCellularBudget;
@property (readonly, nonatomic) BOOL hasBatteryBudget;
@property (readonly, nonatomic) NSDictionary *cloudAssetCountPerType;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (readonly, nonatomic, getter=isConnectedToNetwork) BOOL connectedToNetwork;
@property (readonly, nonatomic, getter=isCellularRestricted) BOOL cellularRestricted;
@property (readonly, nonatomic, getter=isInAirplaneMode) BOOL inAirplaneMode;
@property (readonly, nonatomic) BOOL isConstrainedNetwork;
@property (weak, nonatomic) id<CPLStatusDelegate> delegate;

- (void)_save;
- (void).cxx_destruct;
- (id)statusDescription;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (BOOL)writeInitialSyncMarker:(id *)a0;
- (id)initWithClientLibraryBaseURLForCPLEngine:(id)a0;
- (void)_loadIfNecessary;
- (BOOL)_writeInitialSyncMarkerForDate:(id)a0 error:(id *)a1;
- (BOOL)_deleteInitialSyncMarkerWithError:(id *)a0;
- (void)checkInitialSyncMarker;
- (void)refetchFromDisk;
- (void)setCloudAssetCountPerType:(id)a0 updateCheckDate:(BOOL)a1;
- (void)_statusDidChange;
- (void)setHasCellularBudget:(BOOL)a0 hasBatteryBudget:(BOOL)a1 isConstrainedNetwork:(BOOL)a2 isBudgetValid:(BOOL)a3;
- (void)setConnectedToNetwork:(BOOL)a0 cellularIsRestricted:(BOOL)a1 inAirplaneMode:(BOOL)a2;

@end
