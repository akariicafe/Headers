@class NSString, PXScrollViewController, NSMutableDictionary;
@protocol PXGRendererDelegate, PXGTextureConverter;

@interface PXGViewRenderer : NSObject <PXScrollViewControllerObserver, PXGRenderer> {
    NSMutableDictionary *_reusableViewsByClass;
    NSMutableDictionary *_viewBySpriteIndex;
    long long _spriteBufferCapacity;
    unsigned int *_spriteIndexes;
    struct { } *_textureInfos;
    struct CGPoint { double x; double y; } _renderedVisibleOrigin;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _visibleRectInsets;
}

@property (retain, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGRendererDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct { long long scrollRegime; BOOL isAnimatingScroll; BOOL isScrubbing; BOOL isAnimatingContent; unsigned long long zoomBehavior; BOOL isViewBoundsChanging; BOOL isInitialLoad; BOOL isVisible; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect; } interactionState;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) id<PXGTextureConverter> textureConverter;
@property (copy, nonatomic) id /* block */ test_renderSnapshotHandler;

- (void)scrollViewControllerDidScroll:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_makeViewReusable:(id)a0;
- (void)releaseResources;
- (id)_dequeueViewWithClass:(Class)a0;
- (void)dealloc;
- (void)renderSpritesWithTextures:(id)a0 dataStore:(id)a1 presentationDataStore:(id)a2 presentationMetadataStore:(id)a3 layout:(id)a4;
- (void)updateWithChangeDetails:(id)a0;
- (void)_shiftViewsToCompensateForDeferredVisibleOrigin;
- (void)setNeedsRender;
- (id)viewForSpriteIndex:(unsigned int)a0;
- (void)_resizeBuffersForSpriteCount:(long long)a0;
- (double)_screenScale;

@end
