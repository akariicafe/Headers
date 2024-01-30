@interface ARGeoTrackingGradualCorrectionFilter : NSObject {
    struct { void /* unknown type, empty encoding */ columns[4]; } _ENUFromVIOCurrent;
    struct { void /* unknown type, empty encoding */ columns[4]; } _lastVIOPose;
    double _lastTimestamp;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _targetLock;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _posHistory;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _posHistoryC;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ENUFromVIOTarget;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)getCurrentENUFromVIO:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0;
- (id)initWithTargetTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setTargetRotation:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setTargetTranslation:(SEL)a0;
- (void)updateWithVIOPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 timestamp:(double)a1;

@end
