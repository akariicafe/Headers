@class SSUIServiceClient;

@interface SSUIService : NSObject {
    SSUIServiceClient *_client;
}

- (id)init;
- (void).cxx_destruct;
- (void)showScreenshotUIForImage:(id)a0 options:(id)a1;
- (void)showScreenshotUIForImage:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)showScreenshotUI;
- (void)_runPPTNamed:(id)a0 numberOfRequiredScreenshots:(unsigned long long)a1;

@end
