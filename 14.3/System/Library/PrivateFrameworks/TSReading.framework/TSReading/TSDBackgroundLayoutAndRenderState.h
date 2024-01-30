@protocol TSDBackgroundLayoutAndRenderStateDelegate;

@interface TSDBackgroundLayoutAndRenderState : NSObject {
    id<TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
    BOOL mNeedsLayoutAndRender;
    BOOL mNeedsLayoutForTilingLayers;
}

- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsLayoutAndRender;
- (void)clearDelegate;
- (id)initWithDelegate:(id)a0;
- (void)p_didBackgroundLayoutAndRender;

@end
