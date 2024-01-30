@interface ARGeoTrackingConsensusAndAverageFilter : NSObject {
    struct ARConsensusAndAverageFilterImpl { struct { void /* unknown type, empty encoding */ x0[4]; } x0; BOOL x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct vector<AlignedPose, std::__1::allocator<AlignedPose> > { struct AlignedPose *x0; struct AlignedPose *x1; struct __compressed_pair<AlignedPose *, std::__1::allocator<AlignedPose> > { struct AlignedPose *x0; } x2; } x3; struct ParametersAlignment { double x0; int x1; } x4; double x5; } *_impl;
}

- (double)score;
- (void)dealloc;
- (id)initWithENUFromECEF:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 maxHistory:(int)a1 minInlierScore:(double)a2;
- (BOOL)getCurrentENUFromVIO:(double)a0 ENUFromVIO:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
- (void)updateWithVIOPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 VLPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
