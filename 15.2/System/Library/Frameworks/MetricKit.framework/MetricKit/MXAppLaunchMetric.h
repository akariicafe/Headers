@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric

@property (readonly) MXHistogram *histogrammedTimeToFirstDraw;
@property (readonly) MXHistogram *histogrammedApplicationResumeTime;
@property (readonly) MXHistogram *histogrammedOptimizedTimeToFirstDraw;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLaunchTimeData:(id)a0 withResumeTimeData:(id)a1 withActivationTimeData:(id)a2;
- (id)initWithLaunchTimeData:(id)a0 withResumeTimeData:(id)a1;

@end
