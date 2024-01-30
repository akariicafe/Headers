@interface NUHistogram : NSObject <NSCopying, NSMutableCopying> {
    struct unique_ptr<NU::Histogram<long, double>, std::default_delete<NU::Histogram<long, double>>> { struct __compressed_pair<NU::Histogram<long, double> *, std::default_delete<NU::Histogram<long, double>>> { void *__value_; } __ptr_; } _histogram;
}

@property (readonly, nonatomic) long long binCount;
@property (readonly, nonatomic) struct { double x0; double x1; } range;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) const long long *values;
@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;
@property (readonly, nonatomic) double median;
@property (readonly, nonatomic) double mode;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithHistogram:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBinCount:(long long)a0 range:(struct { double x0; double x1; })a1;
- (id)modalityAnalysisWithLimit:(long long)a0 sampleMode:(long long)a1;
- (double)percentile:(double)a0;
- (double)threshold:(double)a0;
- (id /* block */)_samplerForSampleMode:(long long)a0;
- (id)modalityAnalysisWithLimit:(long long)a0 locality:(double)a1 sensitivity:(double)a2 sampleMode:(long long)a3;

@end
