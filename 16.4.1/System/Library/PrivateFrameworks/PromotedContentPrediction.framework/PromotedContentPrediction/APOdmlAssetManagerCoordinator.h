@class NSMutableDictionary, NSOperationQueue, TRIClient, NSObject, APOdmlUnfairLock;

@interface APOdmlAssetManagerCoordinator : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSOperationQueue *refreshClientQueue;
@property (retain, nonatomic) NSObject *refreshClientNotificationObserver;
@property (readonly, nonatomic) NSMutableDictionary *assetManagers;
@property (readonly, nonatomic) APOdmlUnfairLock *refreshTrialLock;
@property BOOL respondToRefreshNotification;

+ (id)sharedAssetManagerCoordinator;

- (void)setUpdateHandlerForNamespace:(id)a0;
- (id)assetManagerForPlacementType:(unsigned long long)a0 assetManagerType:(unsigned long long)a1;
- (void)refreshTrialClientForPlacementTypes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)initializeAssetManagersforPlacementTypes:(id)a0;

@end
