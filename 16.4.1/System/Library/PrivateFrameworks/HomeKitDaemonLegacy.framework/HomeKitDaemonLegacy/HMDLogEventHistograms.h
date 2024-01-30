@class HMMIntervalMapper;

@interface HMDLogEventHistograms : NSObject

@property (class, readonly) HMMIntervalMapper *memoryHistogram;
@property (class, readonly) HMMIntervalMapper *latencyHistogram;
@property (class, readonly) HMMIntervalMapper *successRateHistogram;
@property (class, readonly) HMMIntervalMapper *lowVolumeHistogram;
@property (class, readonly) HMMIntervalMapper *highVolumeHistogram;
@property (class, readonly) HMMIntervalMapper *configurationDataHistogram;
@property (class, readonly) HMMIntervalMapper *fileSizeHistogram;

+ (void)initialize;

@end
