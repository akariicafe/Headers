@interface AppStoreKit.ArtworkLoader : _TtCs12_SwiftObject <ASKImageRequestDelegate> {
    void /* unknown type, empty encoding */ resourceLoader;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ completionHandlers;
    void /* unknown type, empty encoding */ requestCompletionMap;
    void /* unknown type, empty encoding */ isOccluded;
    void /* unknown type, empty encoding */ assetObserver;
}

- (void)imageRequest:(id)a0 didFailWithError:(id)a1;
- (void)resourceLoaderDidLoadAllForReason:(id)a0;
- (void)imageRequest:(id)a0 didLoadImage:(id)a1;
- (void)resourceLoaderDidIdle;
- (void)resourceLoaderDidBeginLoading;

@end
