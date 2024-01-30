@class UISApplicationInitializationContext;

@interface _UIApplicationConfigurationLoader : NSObject {
    UISApplicationInitializationContext *_applicationInitializationContext;
    _Atomic BOOL _hasRequestedPreload;
}

@property (class, readonly, nonatomic) _UIApplicationConfigurationLoader *sharedLoader;

@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;
@property (readonly, nonatomic) BOOL isFrontBoard;
@property (readonly, nonatomic) BOOL usesLocalInitializationContext;

- (void)startPreloadInitializationContext;
- (id)_init;
- (id)_appInitializationContextFactoryClass;
- (void)dealloc;
- (id)_loadInitializationContext;
- (void).cxx_destruct;

@end
