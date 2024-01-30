@interface NUDataSet : NSObject <NSCopying, NSMutableCopying> {
    struct { double sum; double min; double max; double mean; double geomean; double median; double variance; double stddev; double stderr; double ci95; double cv; double mad; } _stats;
    struct { unsigned char sum : 1; unsigned char min : 1; unsigned char max : 1; unsigned char mean : 1; unsigned char geomean : 1; unsigned char median : 1; unsigned char variance : 1; unsigned char stddev : 1; unsigned char stderr : 1; unsigned char ci95 : 1; unsigned char cv : 1; unsigned char mad : 1; } _flags;
    struct DataSet { struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } _values; } _data;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) double sum;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double geometricMean;
@property (readonly, nonatomic) double median;
@property (readonly, nonatomic) double variance;
@property (readonly, nonatomic) double standardDeviation;
@property (readonly, nonatomic) double standardError;
@property (readonly, nonatomic) double confidenceInterval95;
@property (readonly, nonatomic) double coefficientOfVariation;
@property (readonly, nonatomic) double medianAbsoluteDeviation;
@property (readonly, nonatomic) double estimatedStandardDeviation;
@property (readonly, nonatomic) double estimatedStandardError;
@property (readonly, nonatomic) double estimatedConfidenceInterval95;
@property (readonly, nonatomic) double estimatedCoefficientOfVariation;

- (double)valueAtIndex:(long long)a0;
- (id)map:(id /* block */)a0;
- (id)init;
- (id)filter:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(double)a0;
- (id)initWithValues:(const double *)a0 count:(long long)a1;
- (const struct DataSet { struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x0; } *)_const_data;
- (id)initWithDataSet:(id)a0;
- (void)enumerateValues:(id /* block */)a0;
- (BOOL)isEqualToDataSet:(id)a0;
- (void)_resetStats;
- (double)percentile:(double)a0;

@end
