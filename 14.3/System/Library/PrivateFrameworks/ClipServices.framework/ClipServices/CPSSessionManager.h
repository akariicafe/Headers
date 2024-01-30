@class CPSInstallationController, NSArray, NSMutableDictionary, NSObject;
@protocol CPSBusinessItemFetching, CPSAppInfoFetching, OS_dispatch_source, OS_dispatch_queue, CPSLegacyAppInstalling;

@interface CPSSessionManager : NSObject {
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    id<CPSAppInfoFetching> _appInfoFetcher;
    id<CPSBusinessItemFetching> _businessItemFetcher;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

@property (class, readonly, nonatomic) CPSSessionManager *sharedManager;

@property (readonly, nonatomic) CPSInstallationController *clipInstaller;
@property (retain, nonatomic) id<CPSLegacyAppInstalling> legacyInstaller;
@property (readonly, nonatomic) NSArray *allSessions;

- (id)init;
- (void).cxx_destruct;
- (void)handleManagedConfigurationChanged;
- (void)_setUpMemoryPressureHandler;
- (void)_handleMemoryPressure:(unsigned long long)a0;
- (void)getSessionWithURL:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)sessionWithURL:(id)a0 createIfNoExist:(BOOL)a1;
- (void)clearSessionWithURL:(id)a0;
- (void)getSessionWithURL:(id)a0 completion:(id /* block */)a1;

@end
