@interface CHBoxcarFilterPointFIFO : CHPointFIFO

@property (nonatomic) struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > { void *__value_; } __end_cap_; } prevPoints;
@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;

- (void)clear;
- (void).cxx_destruct;
- (void)addPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1 spacing:(float)a2;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1;
- (void)flush;
- (id).cxx_construct;

@end
