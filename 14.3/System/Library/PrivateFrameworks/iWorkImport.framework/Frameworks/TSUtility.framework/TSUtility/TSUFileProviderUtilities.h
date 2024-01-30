@interface TSUFileProviderUtilities : NSObject

+ (void)initialize;
+ (void)bookmarkableStringFromSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)setAlternateContentsURL:(id)a0 onSandboxedURL:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
+ (void)fetchAlternateContentsURLForSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)didUpdateAlternateContentsDocumentForSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;

- (id)init;

@end
