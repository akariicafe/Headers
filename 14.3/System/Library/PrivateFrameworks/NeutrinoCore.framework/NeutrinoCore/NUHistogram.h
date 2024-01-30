@interface NUHistogram : NSObject <NSCopying, NSMutableCopying> {
    struct unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double> > > { struct __compressed_pair<NU::Histogram<long, double> *, std::__1::default_delete<NU::Histogram<long, double> > > { struct Histogram<long, double> *__value_; } __ptr_; } _histogram;
}

@property (readonly, nonatomic) long long binCount;
@property (readonly, nonatomic) struct { double x0; double x1; } range;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) const long long *values;
@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;
@property (readonly, nonatomic) double mode;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHistogram:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)debugDescription;
- (double)percentile:(double)a0;
- (id)initWithBinCount:(long long)a0 range:(struct { double x0; double x1; })a1;

@end
