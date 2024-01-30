@class NSString, NSObject;
@protocol OS_dispatch_queue, BBRemoteDataProviderClientProxy, BBRemoteDataProviderDelegate;

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy> {
    NSString *_sectionID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id<BBRemoteDataProviderClientProxy> _clientProxy;
    BOOL _connected;
    BOOL _serverIsReady;
    NSObject<OS_dispatch_queue> *_serverControlQueue;
    id<BBRemoteDataProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (void)invalidateBulletins;
- (void)reloadDefaultSectionInfo:(id)a0;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (void)deliverResponse:(id)a0 forBulletinRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (void)setClearedInfo:(id)a0;
- (void)noteSectionInfoDidChange:(id)a0;
- (void)setSectionInfo:(id)a0;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (id)sectionIdentifier;
- (void)updateClearedInfoWithClearedInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;
- (void)updateSectionInfoWithSectionInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)calloutToServer:(id /* block */)a0;
- (BOOL)checkResponds:(BOOL)a0 forSelector:(SEL)a1;
- (BOOL)migrateSectionInfo:(id)a0 oldSectionInfo:(id)a1;
- (void)_logDoesNotRespond:(SEL)a0;
- (void)_sendClientRequest:(id /* block */)a0;
- (void)dealloc;
- (void)addBulletin:(id)a0 forDestinations:(unsigned long long)a1;
- (BOOL)canPerformMigration;
- (void)setServerIsReady:(BOOL)a0;
- (void)reloadIdentityWithCompletion:(id /* block */)a0;
- (void)withdrawBulletinsWithRecordID:(id)a0;
- (id)initWithSectionID:(id)a0 delegate:(id)a1;
- (void)reloadSectionParameters:(id)a0;
- (void)startWatchdog;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (void)getClearedInfoWithCompletion:(id /* block */)a0;
- (void)modifyBulletin:(id)a0;
- (void)withdrawBulletinWithPublisherBulletinID:(id)a0;
- (void).cxx_destruct;
- (void)dataProviderDidLoad;
- (void)setClientProxy:(id)a0 completion:(id /* block */)a1;

@end
