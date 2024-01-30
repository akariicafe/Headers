@class SBApplication, UISApplicationInitializationContext;

@interface SBApplicationSupportServiceRequestContext : NSObject {
    BOOL _hostIsSpringBoard;
    SBApplication *_app;
    SBApplication *_hostApp;
    SBApplication *_extensionContainingApp;
    UISApplicationInitializationContext *_applicationInitializationContext;
}

@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;

+ (id)hostingApplicationBundleIDForPid:(int)a0;
+ (id)_hostProcessForProcess:(id)a0;
+ (id)initializationContextForClient:(id)a0;

- (id)initWithApplication:(id)a0;
- (id)initWithClient:(id)a0 host:(id)a1;
- (id)_main_displayContext;
- (void).cxx_destruct;
- (id)_main_persistenceIDs;
- (id)_main_deviceContext;
- (unsigned long long)_main_effectiveScreenType;
- (long long)_main_effectiveClassicMode;
- (id)_main_applicationInitializationContext;

@end
