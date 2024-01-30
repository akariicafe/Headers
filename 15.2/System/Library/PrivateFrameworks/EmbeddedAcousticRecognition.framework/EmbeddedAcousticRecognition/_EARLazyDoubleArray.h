@interface _EARLazyDoubleArray : NSArray {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _vec;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (id)_initWithDoubleVector:(const void *)a0;

@end
