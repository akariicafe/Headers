@interface InternalCustomGatherTree : NSObject <MLCustomLayer>

@property (readonly, nonatomic) struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } shape;

- (void).cxx_destruct;
- (BOOL)setWeightData:(id)a0 error:(id *)a1;
- (id)initWithParameterDictionary:(id)a0 error:(id *)a1;
- (id)outputShapesForInputShapes:(id)a0 error:(id *)a1;
- (BOOL)evaluateOnCPUWithInputs:(id)a0 outputs:(id)a1 error:(id *)a2;
- (id).cxx_construct;

@end
