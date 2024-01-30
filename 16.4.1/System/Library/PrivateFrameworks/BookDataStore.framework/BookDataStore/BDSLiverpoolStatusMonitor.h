@class BCICloudIdentityToken, NSHashTable, BDSICloudIdentityToken, NSObject;
@protocol OS_dispatch_queue, BDSLiverpoolStatusChangeObserving;

@interface BDSLiverpoolStatusMonitor : NSObject

@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *currentICloudIdentityToken;
@property (nonatomic) BOOL optedIn;
@property (nonatomic) BOOL optedInKnown;
@property (nonatomic) BOOL lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
@property (nonatomic) int tccNotifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id<BDSLiverpoolStatusChangeObserving> coordinatingObserver;
@property (readonly, copy, nonatomic) BCICloudIdentityToken *iCloudIdentityToken;
@property (readonly, nonatomic) BOOL userIdentityPreviouslyRecordedOnThisDevice;

+ (id)makeOSStateHandler;

- (BOOL)isCloudKitEnabled;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_notifyObserversWithCurrentToken:(id)a0 lastToken:(id)a1;
- (void)dq_archiveCurrentICloudIdentityToken;
- (BOOL)dq_isCloudKitEnabled;
- (void)dq_refreshICloudAvailabilityStatus;
- (void)p_iCloudIdentityDidChange:(id)a0;
- (void)refreshICloudTokensAndUpdateWithOptedIn:(BOOL)a0;
- (void)registerCoordinatingObserver:(id)a0;
- (void)restartObserving;
- (void)updateWithOptedIn:(BOOL)a0;

@end
