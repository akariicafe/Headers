@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric

@property (readonly) MXHistogram *histogrammedTimeToFirstDraw;
@property (readonly) MXHistogram *histogrammedApplicationResumeTime;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLaunchTimeData:(id)a0 withResumeTimeData:(id)a1;

@end
