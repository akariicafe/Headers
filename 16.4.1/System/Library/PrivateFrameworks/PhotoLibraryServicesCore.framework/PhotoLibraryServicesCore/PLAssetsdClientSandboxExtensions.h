@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}

- (BOOL)consumeSandboxExtensions:(id)a0;
- (void)_stopUsingSecurityScopedURLs;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
