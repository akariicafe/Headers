@class PTTapToTrack;

@interface CNObjectTracker : NSObject

@property (class, readonly) BOOL isSupported;

@property (retain) PTTapToTrack *internalTapToTrack;

- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0;
- (id)continueTrackingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 sourceImage:(struct __CVBuffer { } *)a1 sourceDisparity:(struct __CVBuffer { } *)a2;
- (id)findObjectAtPoint:(struct CGPoint { double x0; double x1; })a0 sourceImage:(struct __CVBuffer { } *)a1;
- (id)finishDetectionTrack;
- (void)resetDetectionTrack;
- (BOOL)startTrackingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 within:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sourceImage:(struct __CVBuffer { } *)a2 sourceDisparity:(struct __CVBuffer { } *)a3;

@end
