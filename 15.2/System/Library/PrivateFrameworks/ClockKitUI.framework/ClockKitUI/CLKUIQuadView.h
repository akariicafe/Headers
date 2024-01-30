@class NSCountedSet, NSArray, NSString, CLKUIQuadViewDisplayLink, NSMutableArray;
@protocol CLKUIQuadViewDelegate;

@interface CLKUIQuadView : UIView {
    NSMutableArray *_mutableQuads;
    CLKUIQuadViewDisplayLink *_displayLink;
    struct { unsigned char quadViewWillDisplay : 1; } _delegateRespondsTo;
    unsigned long long _frameNum;
    unsigned int _debugId;
    NSCountedSet *_disabledRenderingReasons;
}

@property (weak, nonatomic) id<CLKUIQuadViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *quads;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawableSize;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) unsigned long long frameNum;
@property (nonatomic) BOOL singleBufferMode;
@property (copy, nonatomic) NSString *debugIdentifier;

+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 colorSpace:(long long)a2;
+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)discardContents;
- (BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2;
- (void)removeAllQuads;
- (void)addQuad:(id)a0;
- (BOOL)_prepareAndRenderForTime:(double)a0 inGroup:(id)a1 checkForDrawable:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1 completion:(id /* block */)a2;
- (void)_prerenderForTime:(double)a0;
- (BOOL)_displayAndCheckForDrawable:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)enumerateHierarchyObserversFromView:(id)a0 withBlock:(id /* block */)a1;
- (void)_handleQuadArrayChange:(id)a0;
- (void)addDisabledRenderingReason:(id)a0;
- (void)removeDisabledRenderingReason:(id)a0;
- (void)addQuadsFromArray:(id)a0;
- (void)removeQuad:(id)a0;

@end
