@class NSNumber, NSMutableDictionary, NSString, NSMutableSet, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue, BLJaliscoDAAPClientDelegate, BLImageManager;

@interface BLJaliscoDAAPClient : NSObject <BLPurchaseDAAPServerDelegate, BUUserAccountObserving> {
    NSNumber *_currentAccountNumber;
    NSMutableSet *_completionHandlers;
    NSMutableSet *_familyCompletionHandlers;
    BOOL _skipLoadingCheck;
    NSObject<OS_dispatch_queue> *_serverWorkerQueue;
    unsigned long long _timebombRetries;
}

@property (nonatomic) unsigned long long currentServerGeneration;
@property (nonatomic) unsigned long long pendingUpdateGeneration;
@property (copy, nonatomic) id /* block */ resetJaliscoStatusHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dsidQueue;
@property (retain, nonatomic) NSMutableDictionary *swqDSIDToDAAPServer;
@property (retain, nonatomic) NSMutableSet *purchaseDAAPSyncsInFlight;
@property (retain, nonatomic) NSManagedObjectContext *moc;
@property (readonly, nonatomic, getter=isInitiallyLoadingJalisco) BOOL initiallyLoadingJalisco;
@property (weak, nonatomic) id<BLJaliscoDAAPClientDelegate> delegate;
@property (weak, nonatomic) id<BLImageManager> imageManagerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isSupported;
+ (void)preWarm;
+ (BOOL)workaround_18397698;
+ (id)sharedClient;

- (id)persistentStoreCoordinator;
- (id)init;
- (void).cxx_destruct;
- (id)_dsids;
- (void)userAccount:(unsigned long long)a0 didChangeWithReason:(unsigned long long)a1;
- (id)newManagedObjectContext;
- (BOOL)resetPoliteTimers;
- (id)newManagedObjectContextWithPrivateQueueConcurrency;
- (id)fetchRequestForBuyParameters:(id)a0;
- (void)updatePolitely:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (id)_allPurchaseDAAPServers;
- (id)fetchRequestForStoreIDs:(id)a0;
- (void)hideItemsWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (id)fetchRequestForStoreIDIncludingHidden:(id)a0;
- (id)_currentPurchaseDAAPServers;
- (void)_sendCompletionHandlersWithSuccess:(BOOL)a0 generation:(unsigned long long)a1;
- (id)_familyPurchaseDAAPServers;
- (void)_processFamilyCircleAdded:(id)a0 removed:(id)a1 unchanged:(id)a2 completion:(id /* block */)a3;
- (id)_fetchRequestForNotInStoreAccountIDs:(id)a0;
- (void)_resetPurchaseDAAPServersWithQueue:(id)a0;
- (void)purchaseServerHandleClientExpired;
- (void)purchaseServerRequestITunesAuthenticationWithCompletion:(id /* block */)a0;
- (void)startObservingNotifications;
- (void)stopObservingNotifications;
- (void)refreshSignInStatus;
- (void)handleApplicationDidBecomeActive;
- (void)jaliscoArtworkTimebombed;
- (void)forceJaliscoArtworkUpdateWithCompletion:(id /* block */)a0;
- (void)fetchItemsForArtworkCacheWithCompletion:(id /* block */)a0;
- (void)fetchItemsForStoreIDs:(id)a0 completion:(id /* block */)a1;
- (id)fetchItemsForStoreIDs:(id)a0;
- (void)fetchItemsForBuyParameters:(id)a0 completion:(id /* block */)a1;
- (void)setItemHidden:(BOOL)a0 forStoreID:(id)a1;
- (void)updateFamilyPolitely:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (id)fetchRequestForStoreID:(id)a0;
- (id)predicateForItems:(BOOL)a0;
- (id)_fetchItemsForNeedsImport:(BOOL)a0;

@end
