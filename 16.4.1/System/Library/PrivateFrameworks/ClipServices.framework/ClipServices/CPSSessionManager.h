@class CPSInstallationController, NSArray, NSMutableDictionary, NSObject;
@protocol CPSBusinessItemFetching, CPSAppInfoFetching, OS_dispatch_source, OS_dispatch_queue, CPSLegacyAppInstalling;

@interface CPSSessionManager : NSObject {
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

@property (class, readonly, nonatomic) CPSSessionManager *sharedManager;

@property (readonly, nonatomic) CPSInstallationController *clipInstaller;
@property (retain, nonatomic) id<CPSLegacyAppInstalling> legacyInstaller;
@property (readonly, nonatomic) NSArray *allSessions;
@property (readonly, nonatomic) id<CPSAppInfoFetching> appInfoFetcher;
@property (readonly, nonatomic) id<CPSBusinessItemFetching> businessItemFetcher;

- (void)_localeChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)sessionWithURL:(id)a0 createIfNoExist:(BOOL)a1;
- (void)_handleMemoryPressure:(unsigned long long)a0;
- (void)_setUpMemoryPressureHandler;
- (void)clearSessionWithURL:(id)a0;
- (void)getSessionWithURL:(id)a0 completion:(id /* block */)a1;
- (void)getSessionWithURL:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)handleManagedConfigurationChanged;

@end
