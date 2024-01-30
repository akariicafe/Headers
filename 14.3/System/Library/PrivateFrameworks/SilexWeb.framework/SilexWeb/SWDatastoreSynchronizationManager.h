@class NSString;
@protocol SWSessionManager, SWScriptsManager, SWDatastoreManager, SWDatastoreFactory, SWLogger;

@interface SWDatastoreSynchronizationManager : NSObject <SWMessageHandler, SWDatastoreObserver, SWDatastoreSynchronizationManager>

@property (readonly, nonatomic) id<SWDatastoreManager> datastoreManager;
@property (readonly, nonatomic) id<SWDatastoreFactory> settingsFactory;
@property (readonly, nonatomic) id<SWScriptsManager> scriptsManager;
@property (readonly, nonatomic) id<SWSessionManager> sessionManager;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMessage:(id)a0 securityOrigin:(id)a1;
- (id)initWithDatastoreManager:(id)a0 settingsFactory:(id)a1 scriptsManager:(id)a2 messageHandlerManager:(id)a3 sessionManager:(id)a4 logger:(id)a5;
- (void)datastoreManager:(id)a0 didChangeFromDatastore:(id)a1 originatingSession:(id)a2;

@end
