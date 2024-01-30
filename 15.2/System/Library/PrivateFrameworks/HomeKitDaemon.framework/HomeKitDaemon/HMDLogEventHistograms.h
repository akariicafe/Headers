@class HMDIntervalMapper;

@interface HMDLogEventHistograms : HMFObject

@property (class, readonly) HMDIntervalMapper *memoryHistogram;
@property (class, readonly) HMDIntervalMapper *latencyHistogram;
@property (class, readonly) HMDIntervalMapper *successRateHistogram;
@property (class, readonly) HMDIntervalMapper *lowVolumeHistogram;
@property (class, readonly) HMDIntervalMapper *highVolumeHistogram;
@property (class, readonly) HMDIntervalMapper *configurationDataHistogram;
@property (class, readonly) HMDIntervalMapper *fileSizeHistogram;

+ (void)initialize;

@end
