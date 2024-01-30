@protocol MLBatchProvider;

@interface MLShufflingBatchProvider : NSObject <MLBatchProvider> {
    struct vector<long, std::__1::allocator<long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *__value_; } __end_cap_; } indices;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> { unsigned int __x_; } randomNumberGenerator;
}

@property (retain) id<MLBatchProvider> batchProvider;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (void)shuffle;
- (id).cxx_construct;
- (id)initWithBatchProvider:(id)a0 seed:(id)a1;
- (id)featuresAtIndex:(long long)a0;

@end
