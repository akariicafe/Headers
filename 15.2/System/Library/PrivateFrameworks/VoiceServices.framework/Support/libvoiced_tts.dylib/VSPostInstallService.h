@interface VSPostInstallService : NSObject

- (void)registerPostInstallActivity;
- (void)clearSynthesisCache;
- (void)resetMobileAssetDefaults;

@end
