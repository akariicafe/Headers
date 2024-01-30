@protocol TSDBackgroundLayoutAndRenderStateDelegate;

@interface TSDBackgroundLayoutAndRenderState : NSObject {
    id<TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
    BOOL mNeedsLayoutAndRender;
    BOOL mNeedsLayoutForTilingLayers;
}

- (void)clearDelegate;
- (id)initWithDelegate:(id)a0;
- (void)p_didBackgroundLayoutAndRender;
- (void)setNeedsLayoutAndRender;
- (void)setNeedsLayoutForTilingLayers;

@end
