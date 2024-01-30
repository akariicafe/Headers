@class MXForegroundExitData, MXBackgroundExitData;

@interface MXAppExitMetric : MXMetric

@property (readonly) MXForegroundExitData *foregroundExitData;
@property (readonly) MXBackgroundExitData *backgroundExitData;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithForegroundExitData:(id)a0 backgroundExitData:(id)a1;

@end
