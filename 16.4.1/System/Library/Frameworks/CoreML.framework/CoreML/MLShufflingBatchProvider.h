@protocol MLBatchProvider;

@interface MLShufflingBatchProvider : NSObject <MLBatchProvider> {
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } indices;
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { unsigned int __x_; } randomNumberGenerator;
}

@property (retain) id<MLBatchProvider> batchProvider;
@property (readonly, nonatomic) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)shuffle;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithBatchProvider:(id)a0 seed:(id)a1;

@end
