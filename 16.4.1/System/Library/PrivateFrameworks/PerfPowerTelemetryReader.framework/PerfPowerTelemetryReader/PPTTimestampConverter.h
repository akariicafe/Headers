@class NSURL;

@interface PPTTimestampConverter : NSObject {
    NSURL *_filepath;
    double _timeZoneOffset;
    struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { void *__value_; } __end_cap_; } _systemOffsets;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isInitialized;
- (id)initWithFilepath:(id)a0;
- (BOOL)_initializeSystemOffsetCache;
- (double)epochTimeFromMonotonicTime:(double)a0;
- (double)localTimeFromMonotonicTime:(double)a0;
- (double)monotonicTimeFromEpochTime:(double)a0;
- (double)systemOffsetFromMonotonicTime:(double)a0;

@end
