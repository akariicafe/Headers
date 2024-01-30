@class NSCache, WKProcessPool;

@interface MKWebViewFactory : NSObject {
    WKProcessPool *_processPool;
    NSCache *_webViewCache;
}

+ (id)sharedWebViewFactory;

- (void)requeueItem:(id)a0;
- (id)dequeueItemWithBridgeConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
