@class NSCountedSet, NSArray, NSString, CLKUIQuadViewRenderCoordinator, NSMutableArray, NSObject;
@protocol CLKUIQuadViewDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface CLKUIQuadView : UIView {
    NSMutableArray *_mutableQuads;
    CLKUIQuadViewRenderCoordinator *_renderCoordinator;
    struct { unsigned char quadViewWillDisplay : 1; } _delegateRespondsTo;
    unsigned long long _frameNum;
    unsigned int _debugId;
    NSCountedSet *_disabledRenderingReasons;
    NSObject<OS_dispatch_queue> *_asyncRenderQueue;
    NSObject<OS_dispatch_semaphore> *_asyncSemaphore;
}

@property (weak, nonatomic) id<CLKUIQuadViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *quads;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawableSize;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) unsigned long long frameNum;
@property (nonatomic) BOOL singleBufferMode;
@property (readonly, copy, nonatomic) NSString *debugIdentifier;

+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1;
+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1 options:(unsigned long long)a2;
+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1 options:(unsigned long long)a2 colorSpace:(long long)a3;

- (void)setDebugIdentifier:(id)a0;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)discardContents;
- (void).cxx_destruct;
- (void)addQuad:(id)a0;
- (void)removeAllQuads;
- (BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2;
- (void)_async_prepareAndRenderForTime:(double)a0 inGroup:(id)a1 checkForDrawable:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_displayAndCheckForDrawable:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_handleQuadArrayChange:(id)a0;
- (void)_prepareAndRenderForTime:(double)a0 inGroup:(id)a1 checkForDrawable:(BOOL)a2 completion:(id /* block */)a3;
- (void)_prerenderForTime:(double)a0;
- (void)_runOnRenderQueueIfNeeded:(id /* block */)a0;
- (BOOL)_sync_prepareAndRenderForTime:(double)a0 inGroup:(id)a1 checkForDrawable:(BOOL)a2 completion:(id /* block */)a3;
- (void)addDisabledRenderingReason:(id)a0;
- (void)addQuadsFromArray:(id)a0;
- (void)enumerateHierarchyObserversFromView:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1 options:(unsigned long long)a2 asyncRenderQueue:(id)a3;
- (void)removeDisabledRenderingReason:(id)a0;
- (void)removeQuad:(id)a0;
- (BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1 completion:(id /* block */)a2;

@end
