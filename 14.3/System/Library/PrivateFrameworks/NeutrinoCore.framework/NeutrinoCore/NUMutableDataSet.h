@interface NUMutableDataSet : NUDataSet

@property (readonly, nonatomic) long long capacity;

- (struct DataSet { struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x0; } *)_data;
- (void)addValue:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(long long)a0;
- (void)appendDataSet:(id)a0;

@end
