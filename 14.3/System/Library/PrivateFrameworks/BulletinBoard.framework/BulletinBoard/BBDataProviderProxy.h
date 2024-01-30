@class NSString, BBDataProviderIdentity, NSObject;
@protocol OS_dispatch_queue, BBRemoteDataProviderServerProxy, BBRemoteDataProvider;

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy> {
    id<BBRemoteDataProvider> _dataProvider;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    BOOL _dataProviderDidLoad;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id<BBRemoteDataProviderServerProxy> _serverProxy;
    BOOL _connected;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) BBDataProviderIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addBulletin:(id)a0 interrupt:(BOOL)a1;
- (void)dataProviderDidLoad;
- (void)reloadSectionParameters;
- (void).cxx_destruct;
- (void)invalidateBulletins;
- (void)dealloc;
- (void)_makeClientRequest:(id /* block */)a0;
- (void)_makeServerRequest:(id /* block */)a0;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (void)deliverBulletinActionResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateClearedInfoWithHandler:(id /* block */)a0;
- (void)withdrawBulletinsWithRecordID:(id)a0;
- (void)modifyBulletin:(id)a0;
- (id)initWithDataProvider:(id)a0 clientReplyQueue:(id)a1;
- (void)setServerProxy:(id)a0;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (void)updateSectionInfoWithHandler:(id /* block */)a0;
- (void)withdrawBulletinWithPublisherBulletinID:(id)a0;
- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (void)addBulletin:(id)a0 forDestinations:(unsigned long long)a1;
- (void)noteSectionInfoDidChange:(id)a0;
- (void)updateSectionInfoWithHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (void)reloadDefaultSectionInfo;
- (void)updateIdentity:(id /* block */)a0;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;

@end
