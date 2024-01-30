@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (void)_stopUsingSecurityScopedURLs;

@end
