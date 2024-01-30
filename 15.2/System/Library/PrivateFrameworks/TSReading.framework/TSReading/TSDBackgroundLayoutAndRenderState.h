@protocol TSDBackgroundLayoutAndRenderStateDelegate;

@interface TSDBackgroundLayoutAndRenderState : NSObject {
    id<TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
    BOOL mNeedsLayoutAndRender;
    BOOL mNeedsLayoutForTilingLayers;
}

- (id)initWithDelegate:(id)a0;
- (void)clearDelegate;
- (void)setNeedsLayoutForTilingLayers;
- (void)p_didBackgroundLayoutAndRender;
- (void)setNeedsLayoutAndRender;

@end
