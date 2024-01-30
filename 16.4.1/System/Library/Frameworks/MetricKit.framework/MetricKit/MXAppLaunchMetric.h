@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric

@property (readonly) MXHistogram *histogrammedTimeToFirstDraw;
@property (readonly) MXHistogram *histogrammedApplicationResumeTime;
@property (readonly) MXHistogram *histogrammedOptimizedTimeToFirstDraw;
@property (readonly) MXHistogram *histogrammedExtendedLaunch;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLaunchTimeData:(id)a0 withResumeTimeData:(id)a1 withActivationTimeData:(id)a2 withExtendedLaunchTimeData:(id)a3;
- (id)initWithLaunchTimeData:(id)a0 withResumeTimeData:(id)a1;
- (id)initWithLaunchTimeData:(id)a0 withResumeTimeData:(id)a1 withActivationTimeData:(id)a2;

@end
