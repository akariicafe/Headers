@interface VCPCtrTracker : NSObject <VCPBaseTracker> {
    struct { struct *x0; struct *x1; struct *x2; struct tplTracker_resampler_context *x3; struct *x4; } *context;
}

@property struct CGPoint { double x0; double x1; } *box;
@property BOOL stableInd;
@property BOOL lostTrackInd;
@property float confidence;

- (id)init;
- (void)dealloc;
- (void)setupTrackerWithReferenceFrame:(struct __CVBuffer { } *)a0 withROI:(struct CGPoint { double x0; double x1; } *)a1;
- (void)trackInFrame:(struct __CVBuffer { } *)a0;

@end
