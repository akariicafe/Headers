@class NSTimer, NSMutableArray;

@interface PVPanAndZoomManager : NSObject {
    double _maxScale;
    double _minScale;
    BOOL _skipFirstSnapToEdge;
    NSTimer *_snapToEdgeTimer;
    double _scaleWhileSnapped;
    struct CGSize { double width; double height; } _mediaSize;
    struct CGSize { double width; double height; } _destSize;
    struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } _workingTransformScale;
    struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } _workingTransformPan;
    struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } _workingTransformRotate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastTransformAnimationTime;
    int _mediaStartOffset;
    int _timeScale;
    NSMutableArray *_transforms;
    BOOL _keyframeTransforms;
    BOOL _verticalMedia;
    int _pendingTransformCount;
}

@property (nonatomic) int clipTransformInitialStartOffset;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (double)maximumX:(double)a0 scale:(double)a1;
- (double)maximumY:(double)a0 scale:(double)a1;
- (void)prepareClipForScale:(struct CGSize { double x0; double x1; })a0 destSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isEditingTransform;
- (id)scaleClip:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 time:(int)a2 atLocation:(struct CGPoint { double x0; double x1; })a3;
- (void)applyTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a0 shouldCommit:(BOOL)a1 outTransform:(id *)a2;
- (void)snapToEdgeEnd:(id)a0;
- (void)panWithDelta:(struct CGPoint { double x0; double x1; })a0 time:(int)a1 outTransform:(id *)a2;
- (void)scaleWithDelta:(double)a0 location:(struct CGPoint { double x0; double x1; })a1 time:(int)a2 outTransform:(id *)a3;
- (void)rotateWithDelta:(double)a0 location:(struct CGPoint { double x0; double x1; })a1 time:(int)a2 outTransform:(id *)a3;
- (BOOL)tooMuchX:(double)a0 scale:(double)a1;
- (BOOL)tooMuchY:(double)a0 scale:(double)a1;
- (void)updateTransformScale:(id)a0 mediaSize:(struct CGSize { double x0; double x1; })a1 viewSize:(struct CGSize { double x0; double x1; })a2 location:(struct CGPoint { double x0; double x1; })a3 outTransform:(id *)a4;
- (void)beginEditingTransform:(id)a0 mediaSize:(struct CGSize { double x0; double x1; })a1 viewSize:(struct CGSize { double x0; double x1; })a2 atTime:(int)a3 keyframeTransforms:(BOOL)a4 mediaStartOffset:(int)a5 timeScale:(int)a6 transformType:(int)a7;
- (void)updateTransform:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 atTime:(int)a2 delta:(struct CGPoint { double x0; double x1; })a3 transformType:(int)a4 outTransform:(id *)a5;
- (void)endEditingTransform:(id)a0 transformType:(int)a1 outTransform:(id *)a2;

@end
