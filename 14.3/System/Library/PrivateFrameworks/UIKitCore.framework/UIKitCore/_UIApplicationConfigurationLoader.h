@class UISApplicationInitializationContext;

@interface _UIApplicationConfigurationLoader : NSObject {
    UISApplicationInitializationContext *_applicationInitializationContext;
    _Atomic BOOL _hasRequestedPreload;
}

@property (class, readonly, nonatomic) _UIApplicationConfigurationLoader *sharedLoader;

@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;
@property (readonly, nonatomic) BOOL isFrontBoard;
@property (readonly, nonatomic) BOOL usesLocalInitializationContext;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_appInitializationContextFactoryClass;
- (id)_init;
- (id)_loadInitializationContext;
- (void)startPreloadInitializationContext;

@end
