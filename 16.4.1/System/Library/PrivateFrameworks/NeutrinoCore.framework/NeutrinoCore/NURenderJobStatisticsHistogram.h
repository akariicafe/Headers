@interface NURenderJobStatisticsHistogram : NSObject

@property (readonly) unsigned long long binCount;
@property (readonly) double millisPerBin;
@property (readonly) long long *prepareLatencyHistogram;
@property (readonly) long long *prepareDurationHistogram;
@property (readonly) long long *renderLatencyHistogram;
@property (readonly) long long *renderDurationHistogram;
@property (readonly) long long *completeLatencyHistogram;
@property (readonly) long long *completeDurationHistogram;
@property (readonly) long long *totalDurationHistogram;
@property (readonly) long long *totalLatencyHistogram;
@property (readonly) long long *totalHistogram;
@property (readonly) long long prepareLatencyHistogramCount;
@property (readonly) long long prepareDurationHistogramCount;
@property (readonly) long long renderLatencyHistogramCount;
@property (readonly) long long renderDurationHistogramCount;
@property (readonly) long long completeLatencyHistogramCount;
@property (readonly) long long completeDurationHistogramCount;
@property (readonly) long long totalDurationHistogramCount;
@property (readonly) long long totalLatencyHistogramCount;
@property (readonly) long long totalHistogramCount;

- (void)dealloc;
- (id)description;
- (void)addStatisticsToHistogram:(id)a0;
- (id)getPercentiles:(long long *)a0 numSamples:(long long)a1;
- (id)graphHistogram:(long long *)a0 label:(id)a1;
- (id)initWithBins:(unsigned long long)a0 millisPerBin:(double)a1;

@end
