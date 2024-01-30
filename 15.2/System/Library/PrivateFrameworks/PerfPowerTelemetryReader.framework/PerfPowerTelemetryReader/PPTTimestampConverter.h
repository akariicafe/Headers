@interface PPTTimestampConverter : NSObject {
    double _timeZoneOffset;
    struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *__value_; } __end_cap_; } _systemOffsets;
}

+ (id)sharedInstance;

- (BOOL)_isInitialized;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (double)localTimeFromMonotonicTime:(double)a0;
- (BOOL)_initializeSystemOffsetCache;
- (double)monotonicTimeFromUTCTime:(double)a0;

@end
