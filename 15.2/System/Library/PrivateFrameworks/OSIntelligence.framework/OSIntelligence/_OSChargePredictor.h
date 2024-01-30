@interface _OSChargePredictor : NSObject

+ (id)predictor;

- (id)init;
- (BOOL)longChargeExpectedWithConfidence:(double)a0;
- (double)timeUntilNextExpectedPluginWithConfidence:(double)a0;
- (BOOL)longChargeExpected;
- (double)timeUntilNextExpectedPlugin;
- (BOOL)isDeepDischargeExpected;
- (int)expectedMinimumDischarge;

@end
