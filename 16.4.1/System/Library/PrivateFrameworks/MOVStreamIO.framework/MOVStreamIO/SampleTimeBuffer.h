@class NSString;

@interface SampleTimeBuffer : NSObject {
    struct vector<CMTime, std::allocator<CMTime>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::allocator<CMTime>> { struct *__value_; } __end_cap_; } _times;
}

@property (copy, nonatomic) NSString *name;

- (BOOL)isEmpty;
- (id).cxx_construct;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)timeline;
- (void)appendTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
