@interface InternalCustomTileLike : NSObject <MLCustomLayer>

@property (readonly, nonatomic) unsigned long long inputRank;
@property (readonly, nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } multiples;
@property (readonly, nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } inputShape;
@property (readonly, nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } outputShape;

- (void).cxx_destruct;
- (BOOL)setWeightData:(id)a0 error:(id *)a1;
- (id)initWithParameterDictionary:(id)a0 error:(id *)a1;
- (id)outputShapesForInputShapes:(id)a0 error:(id *)a1;
- (BOOL)evaluateOnCPUWithInputs:(id)a0 outputs:(id)a1 error:(id *)a2;
- (id).cxx_construct;

@end
