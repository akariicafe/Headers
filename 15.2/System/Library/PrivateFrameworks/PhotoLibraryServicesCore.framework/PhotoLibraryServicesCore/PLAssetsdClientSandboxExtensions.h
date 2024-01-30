@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}

- (void).cxx_destruct;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_stopUsingSecurityScopedURLs;

@end
