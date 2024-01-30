@class PKStrokeRenderMask, NSUUID, CHRecognizer, UIView, PKShape;
@protocol PKShapeDrawingControllerDelegate;

@interface PKShapeDrawingController : NSObject {
    UIView *_view;
    struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > { struct IntPoint *__begin_; struct IntPoint *__end_; struct __compressed_pair<ClipperLib::IntPoint *, std::__1::allocator<ClipperLib::IntPoint> > { struct IntPoint *__value_; } __end_cap_; } _currentStrokePoints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentStrokeBounds;
    BOOL _closedShapeDetected;
    BOOL _stopGestureDetected;
    BOOL _shouldDetect;
    struct vector<TimestampedPoint, std::__1::allocator<TimestampedPoint> > { struct TimestampedPoint *__begin_; struct TimestampedPoint *__end_; struct __compressed_pair<TimestampedPoint *, std::__1::allocator<TimestampedPoint> > { struct TimestampedPoint *__value_; } __end_cap_; } _timestampedPoints;
    struct { struct CGPoint { double x; double y; } point; double force; double azimuth; double altitude; double velocity; double timestamp; BOOL predicted; long long estimationUpdateIndex; double length; BOOL hasEstimatedAltitudeAndAzimuth; } _averageInputPoint;
    unsigned long long _numInputPoints;
    double _strokeStartTime;
    double _latestAddedPointTime;
    double _strokeDuration;
    double _minimumRecognitionDelay;
    double _maximumRecognitionDelay;
}

@property (retain, nonatomic) PKStrokeRenderMask *smartFillRenderMask;
@property (retain, nonatomic) NSUUID *smartFillGroupID;
@property (retain, nonatomic) CHRecognizer *shapeRecognizer;
@property (weak, nonatomic) id<PKShapeDrawingControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isSmartFillEnabled) BOOL smartFillEnabled;
@property (nonatomic, getter=isShapeRecognitionOn) BOOL shapeRecognitionOn;
@property (readonly, nonatomic, getter=isSmartFillActive) BOOL smartFillActive;
@property (readonly, nonatomic, getter=isRecordingStroke) BOOL recordingStroke;
@property (readonly, nonatomic) struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; } averageInputPoint;
@property (retain, nonatomic) PKShape *detectedShape;

+ (BOOL)shouldBeAvailableForWindow:(id)a0;
+ (struct CGPath { } *)_createNormalizedPathFromPath:(struct CGPath { } *)a0;
+ (struct CGPath { } *)_createNormalizedPathFromSVGPath:(id)a0;
+ (void)_addLeftCloudPath:(struct CGPath { } *)a0;
+ (void)_addBottomCenterCloudPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (void)_addRightCloudPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (void)_addTopCenterCloudPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 leftEdge:(BOOL)a2 rightEdge:(BOOL)a3;
+ (struct CGPath { } *)_normalizedHeartPath;
+ (long long)_numCenterCloudPiecesFromInOutSize:(struct CGSize { double x0; double x1; } *)a0;
+ (struct CGPath { } *)_createNormalizedCloudPathWithNumCenterPieces:(long long)a0;
+ (struct CGPath { } *)_normalizedCloudPath;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDelegate:(id)a0 view:(id)a1;
- (void)updateDetectedStrokeState;
- (void)beginStrokeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addStrokePoint:(struct CGPoint { double x0; double x1; })a0 inputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a1;
- (void)cancelDetectionIfNecessary;
- (void)resetStroke;
- (id)detectedShapeWithInputScale:(double)a0 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a2 createCurrentStrokeBlock:(id /* block */)a3;
- (id)shapeFromStroke:(id)a0 inputScale:(double)a1 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a2;
- (id)_strokeFromPoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a0 inputScale:(double)a1 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a2 sourceStroke:(id)a3;
- (double)_arrowRadiusForStroke:(id)a0 inputScale:(double)a1;
- (id)_arrowStrokesWithInputScale:(double)a0 firstPt:(struct CGPoint { double x0; double x1; })a1 secondPt:(struct CGPoint { double x0; double x1; })a2 radius:(double)a3 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a4 sourceStroke:(id)a5;
- (struct CGSize { double x0; double x1; })aspectRatioAdjustedSizeFromResult:(id)a0;
- (void)_updateAverageInputPoint:(const struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; } *)a0;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })averageInputPointFromStroke:(id)a0;
- (id)_chDrawingFromStroke:(id)a0;
- (long long)_shapeTypeFromResultName:(id)a0;
- (id)_generateRectangle:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateTriangle:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateOval:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateStar:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateHeart:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateChatBubble:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generatePentagon:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateLine:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateOutlineArrow:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateManhattanLine:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (id)_generateCloud:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a3;
- (void)_smartFillRenderMaskFromStroke:(id)a0 outPoints:(struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a1 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 completionBlock:(id /* block */)a3;
- (void)_addCurrentStrokePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_checkDetectedStroke;
- (double)_movementSpeed;
- (BOOL)hasMovementStopped;
- (id)beginSmartFillForStroke:(id)a0 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)addSmartFillRenderMaskForStroke:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smartFillStrokeBounds;
- (void)endSmartFill;

@end
