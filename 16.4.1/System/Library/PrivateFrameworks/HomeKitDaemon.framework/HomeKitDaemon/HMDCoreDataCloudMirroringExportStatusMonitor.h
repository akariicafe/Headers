@class NSString, HMDCoreData, NSMutableDictionary, NSManagedObjectContext;
@protocol HMDCoreDataCloudMirroringExportStatusMonitorDelegate;

@interface HMDCoreDataCloudMirroringExportStatusMonitor : HMFObject <HMDCoreDataNotificationListener, HMFLogging> {
    BOOL _exportVerificationInProgress;
    BOOL _additionalExportVerificationPending;
    HMDCoreData *_coreData;
    NSMutableDictionary *_objectIDToExportedToken;
}

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (weak) id<HMDCoreDataCloudMirroringExportStatusMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)coreData:(id)a0 persistentStoreWithIdentifierDidChange:(id)a1;
- (void).cxx_destruct;
- (void)configureWithExpectedObjectIDToExportedToken:(id)a0;
- (id)initWithCoreData:(id)a0 managedObjectContext:(id)a1;
- (void)verifyModelsExportStatus;

@end
