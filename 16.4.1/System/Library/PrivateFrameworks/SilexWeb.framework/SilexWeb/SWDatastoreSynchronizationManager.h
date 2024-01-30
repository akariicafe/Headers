@class NSString;
@protocol SWSessionManager, SWScriptsManager, SWDatastoreFactory, SWLogger, SWDatastoreManager;

@interface SWDatastoreSynchronizationManager : NSObject <SWMessageHandler, SWDatastoreSynchronizationManager>

@property (readonly, nonatomic) id<SWDatastoreFactory> settingsFactory;
@property (readonly, nonatomic) id<SWScriptsManager> scriptsManager;
@property (readonly, nonatomic) id<SWSessionManager> sessionManager;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SWDatastoreManager> datastoreManager;
@property (weak, nonatomic) id<SWDatastoreManager> localDatastoreManager;

@end
