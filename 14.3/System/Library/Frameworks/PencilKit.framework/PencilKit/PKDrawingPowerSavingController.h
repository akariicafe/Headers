@interface PKDrawingPowerSavingController : NSObject {
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } _movementDistanceHistoryBuffer;
    struct CGPoint { double x; double y; } _previousDrawingLocation;
    double _currentMovement;
    double _accumulatedMovement;
    double _previousRenderTimestamp;
    BOOL _valid;
    double _minimumMovementDistancePencil;
    double _minimumMovementDistanceFinger;
    double _minimumMovementDistanceTimeout;
}

@property (nonatomic) BOOL isDrawingWithPencil;
@property (nonatomic) BOOL isDrawingWithMarkerOrEraser;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id).cxx_construct;
- (void)invalidate;
- (void)accumulateMovementForCurrentFrame;
- (BOOL)shouldSkipFrameWithFrameStartTimestamp:(double)a0 framesAfterStart:(unsigned long long)a1;
- (void)registerFrameStartTimestamp:(double)a0;
- (void)drawingBeganAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)drawingMovedToLocation:(struct CGPoint { double x0; double x1; })a0;
- (double)averageMovementDistance;

@end
