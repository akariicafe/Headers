@interface ARGeoTrackingGradualCorrectionFilter : NSObject {
    struct { void /* unknown type, empty encoding */ columns[4]; } _ENUFromVIOCurrent;
    struct { void /* unknown type, empty encoding */ columns[4]; } _lastVIOPose;
    double _lastTimestamp;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _posHistory;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _posHistoryC;
}

@property struct { void /* unknown type, empty encoding */ columns[4]; } ENUFromVIOTarget;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateWithVIOPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 timestamp:(double)a1;
- (BOOL)getCurrentENUFromVIO:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0;
- (id)initWithTargetTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
