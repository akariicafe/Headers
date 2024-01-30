@class NSObject;
@protocol BBDataProvider, OS_dispatch_queue, OS_dispatch_source;

@interface BBLocalDataProvider : BBDataProvider {
    NSObject<OS_dispatch_queue> *_localQueue;
    NSObject<OS_dispatch_queue> *_remoteQueue;
    NSObject<OS_dispatch_source> *_watchdogTimer;
    BOOL _unresponsive;
    BOOL _invalidated;
}

@property (retain, nonatomic) id<BBDataProvider> dataProvider;

+ (id)dataProviderWithDataProvider:(id)a0 serverQueue:(id)a1;
+ (id)dataProviderWithPrincipalClass:(Class)a0 serverQueue:(id)a1 initializationCompletion:(id /* block */)a2;

- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (void)deliverResponse:(id)a0 forBulletinRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)_watchdogFired;
- (void)noteSectionInfoDidChange:(id)a0;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (void)updateClearedInfoWithClearedInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;
- (void)updateSectionInfoWithSectionInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)migrateSectionInfo:(id)a0 oldSectionInfo:(id)a1;
- (void)dealloc;
- (BOOL)canPerformMigration;
- (id)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1;
- (void)reloadIdentityWithCompletion:(id /* block */)a0;
- (void)startWatchdog;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dataProviderDidLoad;
- (id)_bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1;
- (void)_doAsynchronousRemoteRequest:(id /* block */)a0 conditionalOn:(id /* block */)a1 completion:(id /* block */)a2;
- (id)_doSynchronousRemoteRequest:(id /* block */)a0 conditionalOn:(id /* block */)a1;
- (id)_initWithDataProvider:(id)a0 sectionID:(id)a1 serverQueue:(id)a2 initializationCompletion:(id /* block */)a3;
- (void)_ping;
- (id)initWithDataProvider:(id)a0 serverQueue:(id)a1;
- (id)initWithPrincipalClass:(Class)a0 serverQueue:(id)a1 initializationCompletion:(id /* block */)a2;

@end
