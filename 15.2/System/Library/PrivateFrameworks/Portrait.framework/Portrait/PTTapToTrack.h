@class NSMutableArray, FTCinematicTapToTrack;

@interface PTTapToTrack : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tmpCurrentRect;
    FTCinematicTapToTrack *_tracker;
}

@property (retain, nonatomic) NSMutableArray *detections;

+ (BOOL)isSupported;

- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0;
- (id)finalizeTrack;
- (id)addDetectionForNextFrameAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 colorBuffer:(struct __CVBuffer { } *)a1 disparityBuffer:(struct __CVBuffer { } *)a2;
- (BOOL)addDetectionAndStartTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 colorBuffer:(struct __CVBuffer { } *)a2 disparityBuffer:(struct __CVBuffer { } *)a3;
- (id)getRectForPoint:(struct CGPoint { double x0; double x1; })a0 colorBuffer:(struct __CVBuffer { } *)a1;
- (void)resetTrack;
- (void)addDetectionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 disparityBuffer:(struct __CVBuffer { } *)a2;

@end
