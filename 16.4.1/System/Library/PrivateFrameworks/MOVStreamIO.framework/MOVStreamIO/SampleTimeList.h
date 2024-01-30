@class NSArray, MOVStreamTimestamps, NSString;

@interface SampleTimeList : NSObject {
    struct vector<CMTime, std::allocator<CMTime>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::allocator<CMTime>> { struct *__value_; } __end_cap_; } _times;
}

@property (readonly, copy, nonatomic) NSArray *cached_times;
@property (readonly, copy, nonatomic) NSArray *cached_cmtimes;
@property (retain, nonatomic) MOVStreamTimestamps *timestamps;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *times;
@property (readonly, nonatomic) NSArray *cmtimes;
@property (readonly, nonatomic) unsigned long long count;

- (id).cxx_construct;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTimestamps:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })frameRangeFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 to:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithTimes:(const void *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeAtIndex:(unsigned long long)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;

@end
