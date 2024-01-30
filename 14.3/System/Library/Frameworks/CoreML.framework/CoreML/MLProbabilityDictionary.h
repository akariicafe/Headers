@interface MLProbabilityDictionary : NSMutableDictionary {
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } _values;
}

+ (id)probabilityDictionaryForLabels:(id)a0;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)replaceDoubleVectorWith:(double *)a0;
- (id)classLabelOfMaxProbability:(id)a0;

@end
