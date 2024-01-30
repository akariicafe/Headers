@class BUBag, NSObject, NSMutableSet, NSDate, NSNumber, BKPurchaseDAAPBackoff;
@protocol OS_dispatch_queue, BLPurchaseDAAPServerDelegate;

@interface BLPurchaseDAAPServer : NSObject {
    NSDate *_lastPolledAt;
    NSDate *_DAAPReconnectAt;
    BOOL _clientExpired;
    long long _requestReasonCode;
    NSMutableSet *_setupCompletionHandlers;
    BKPurchaseDAAPBackoff *_backoff;
    BUBag *_bag;
    NSObject<OS_dispatch_queue> *_updateItemsQueue;
    NSObject<OS_dispatch_queue> *_backoffQueue;
}

@property (nonatomic) BOOL isServerSetup;
@property (nonatomic) BOOL isServerSetupPending;
@property (readonly, nonatomic, getter=isPrimaryAccount) BOOL primaryAccount;
@property (retain, nonatomic) NSNumber *bagDatabaseID;
@property (retain, nonatomic, setter=_setSessionID:) NSNumber *sessionID;
@property (weak, nonatomic) id<BLPurchaseDAAPServerDelegate> delegate;
@property (retain, nonatomic) NSNumber *dsid;

+ (id)sharedSession;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDSID:(id)a0 delegate:(id)a1;
- (void)updateItemImageURLsIgnoringCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)hideItemsWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (void)resetWithQueue:(id)a0;
- (void)fetchAllItemsPolitely:(BOOL)a0 reason:(long long)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setupWithReason:(long long)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)serverParametersWithCompletionHandler:(id /* block */)a0;
- (void)valueForDAAPBagKey:(id)a0 completion:(id /* block */)a1;
- (void)timeIntervalFromDAAPBagKey:(id)a0 completion:(id /* block */)a1;
- (id)_dataForArtRequest:(BOOL)a0;
- (id)_processResponse:(id)a0;
- (BOOL)_saveInMoc:(id)a0 error:(id *)a1;
- (void)_preProcessResponse:(id)a0 error:(id)a1 responseBlock:(id /* block */)a2;
- (void)_shouldMakeRequest:(id /* block */)a0;
- (id)_localServerDatabaseRevisionInMoc:(id)a0;
- (id)_updatePersistentServerRevision:(id)a0 moc:(id)a1 error:(id *)a2;
- (id)_dataForHideItemsRequestWithStoreIDs:(id)a0;
- (void)_updateVersionAfterHideRequest:(id)a0;
- (void)_sendSetupConfigurationHandlersWithSuccess:(BOOL)a0;
- (void)_loginWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)_configureWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)appRefreshesOnLaunchWithCompletionHandler:(id /* block */)a0;
- (void)forcedRefreshFrequencyWithCompletionHandler:(id /* block */)a0;
- (void)databaseIDWithCompletionHandler:(id /* block */)a0;
- (void)pollingFrequencyWithCompletionHandler:(id /* block */)a0;
- (BOOL)_updatePersistentServerRevision:(id)a0 database:(id)a1 items:(id)a2 error:(id *)a3;
- (void)_fetchItemsWithLocalVersion:(id)a0 serverVersion:(id)a1 reason:(long long)a2 tokenPairs:(id)a3 completionHandler:(id /* block */)a4;
- (void)_sendHandlers:(id)a0 success:(BOOL)a1;
- (void)_fetchDatabaseWithReason:(long long)a0 localServerRevision:(id)a1 latestVersion:(id)a2 completionHandler:(id /* block */)a3;
- (void)_pollLatestRevisionWithReason:(long long)a0 completion:(id /* block */)a1;
- (id)_updatePersistentDatabase:(id)a0 server:(id)a1 moc:(id)a2 error:(id *)a3;
- (id)_updatePersistentItems:(id)a0 moc:(id)a1 database:(id)a2 error:(id *)a3;
- (id)additionalAudiobookInfoKeys;
- (BOOL)_canMakeDAAPRequest;
- (void)handleClientExpired;
- (void)setDAAPReconnectToTimeIntervalSinceNow:(double)a0;
- (id)daapMetaDataFilterString;
- (id)daapQueryFilterString;
- (id)_dataForItemsRequestWithLocalVersion:(id)a0 serverVersion:(id)a1 tokenPairs:(id)a2;
- (void)contextDidSave:(id)a0;

@end
