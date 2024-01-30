@interface MLNearestNeighborsLinearIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } vData;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } vDataL2Squared;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numDataPoints;
@property (nonatomic) unsigned long long numDimensions;

- (void).cxx_destruct;
- (BOOL)updateWithData:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 error:(id *)a1;
- (struct vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; struct pair<unsigned long, float> *x1; struct __compressed_pair<std::__1::pair<unsigned long, float> *, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; } x2; })findNearestNeighbors:(unsigned long long)a0 toQueryPoint:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1;
- (unsigned long long)dataPointCount;
- (id)initWithDataset:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })a0 numberOfDimensions:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;

@end
