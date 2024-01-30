@class SBApplication, UISApplicationInitializationContext;

@interface SBApplicationSupportServiceRequestContext : NSObject {
    BOOL _hostIsSpringBoard;
    SBApplication *_app;
    SBApplication *_hostApp;
    SBApplication *_extensionContainingApp;
    UISApplicationInitializationContext *_applicationInitializationContext;
}

@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;

+ (id)initializationContextForClient:(id)a0;
+ (id)_hostProcessForProcess:(id)a0;
+ (id)hostingApplicationBundleIDForPid:(int)a0;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (id)_main_applicationInitializationContext;
- (unsigned long long)_main_effectiveScreenType;
- (id)_main_deviceContext;
- (id)_main_displayContext;
- (id)_main_persistenceIDs;
- (id)initWithClient:(id)a0 host:(id)a1;
- (long long)_main_effectiveClassicMode;

@end
