@class NSArray, PKDrawing, NSObject;
@protocol OS_dispatch_queue, PKStrokeSpatialCacheDelegate;

@interface PKStrokeSpatialCache : NSObject

@property (copy, nonatomic) id /* block */ generateOnscreenVisibleStrokesBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *onscreenVisibleStrokesQueue;
@property (nonatomic) long long currentGenerationCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedBounds;
@property (retain, nonatomic) PKDrawing *cachedDrawing;
@property (retain, nonatomic) NSArray *onscreenVisibleStrokes;
@property (weak, nonatomic) id<PKStrokeSpatialCacheDelegate> delegate;
@property (nonatomic) BOOL hasValidOnscreenVisibleStrokes;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_clearCache;
- (void)_invalidateCacheForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inDrawing:(id)a1 force:(BOOL)a2;
- (void)_invalidateCacheForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inDrawing:(id)a1;
- (void)_cancelGenerateVisibleStrokesBlockIfNecessary;
- (void)_generateStrokesOnCanvasForVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inDrawing:(id)a1;
- (void)_clearOnscreenVisibleStrokeCacheAndCancelBlockIfNecessary;
- (void)_findOnscreenVisibleStrokesForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inDrawing:(id)a1 completion:(id /* block */)a2;
- (void)_cancelCacheGeneration;

@end
