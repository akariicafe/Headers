@class NSArray, NSString;

@interface SampleTimeRangeList : NSObject <NSCopying> {
    struct vector<CMTimeRange, std::allocator<CMTimeRange>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTimeRange *, std::allocator<CMTimeRange>> { struct *__value_; } __end_cap_; } _ranges;
}

@property (readonly, copy, nonatomic) NSArray *cached_ranges;
@property (copy, nonatomic) NSString *name;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)initWithTimeRanges:(const void *)a0;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeAtIndex:(unsigned long long)a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)containsTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (long long)indexOfTimeRangeAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
