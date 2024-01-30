@interface PPTHistogram : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct unique_ptr<ppt::PPTHistogram_Internal<unsigned long, double>, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> { struct __compressed_pair<ppt::PPTHistogram_Internal<unsigned long, double> *, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> { void *__value_; } __ptr_; } _histogramPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long binCount;
@property (readonly) double binWidth;
@property (readonly) unsigned long long sampleCount;
@property (readonly) struct { double x0; double x1; } range;
@property (readonly) double area;
@property (readonly) double minSample;
@property (readonly) double maxSample;
@property (readonly) double mean;
@property (readonly) double median;
@property (readonly) double mode;
@property (readonly) double variance;

- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithHistogram:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1;
- (const unsigned long long *)frequencyBins;
- (BOOL)isEqualToHistogram:(id)a0;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 samples:(id)a2;
- (const unsigned long long *)cumulativeFrequencyBins;
- (long long)binIndexFor:(id)a0;
- (double)valueForPercentile:(double)a0;

@end
