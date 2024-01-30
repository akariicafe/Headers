@class SSUIServiceClient;

@interface SSUIService : NSObject {
    SSUIServiceClient *_client;
}

- (void).cxx_destruct;
- (id)init;
- (void)showScreenshotUIForImage:(id)a0 options:(id)a1;
- (void)showScreenshotUIForImage:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)showScreenshotUI;
- (void)_runPPTNamed:(id)a0 numberOfRequiredScreenshots:(unsigned long long)a1;

@end
