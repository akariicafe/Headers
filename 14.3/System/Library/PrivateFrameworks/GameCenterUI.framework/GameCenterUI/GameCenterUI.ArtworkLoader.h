@interface GameCenterUI.ArtworkLoader : _TtCs12_SwiftObject <GKImageRequestDelegate> {
    void /* unknown type, empty encoding */ resourceLoader;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ completionHandlers;
    void /* unknown type, empty encoding */ requestCompletionMap;
    void /* unknown type, empty encoding */ isOccluded;
}

- (void)imageRequest:(id)a0 didFailWithError:(id)a1;
- (void)imageRequest:(id)a0 didLoadImage:(id)a1;

@end
