@class NSArray, PKDrawing, NSObject;
@protocol OS_dispatch_queue, PKStrokeSpatialCacheDelegate;

@interface PKStrokeSpatialCache : NSObject {
    BOOL _hasValidOnscreenVisibleStrokes;
    id<PKStrokeSpatialCacheDelegate> _delegate;
    NSArray *_onscreenVisibleStrokes;
    id /* block */ _generateOnscreenVisibleStrokesBlock;
    NSObject<OS_dispatch_queue> *_onscreenVisibleStrokesQueue;
    long long _currentGenerationCount;
    PKDrawing *_cachedDrawing;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
