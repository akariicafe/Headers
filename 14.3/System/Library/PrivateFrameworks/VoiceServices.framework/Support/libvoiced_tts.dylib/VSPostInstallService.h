@interface VSPostInstallService : NSObject

- (void)clearSynthesisCache;
- (void)resetMobileAssetDefaults;
- (void)performPostInstallWithCompletion:(id /* block */)a0;

@end
