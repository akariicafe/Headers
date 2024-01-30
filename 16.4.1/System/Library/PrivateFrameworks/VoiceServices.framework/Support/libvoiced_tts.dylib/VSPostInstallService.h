@interface VSPostInstallService : NSObject

- (void)resetMobileAssetDefaults;
- (void)clearSynthesisCache;
- (void)registerPostInstallActivity;

@end
