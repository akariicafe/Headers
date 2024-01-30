@interface SUICAudioPowerLevelLinearConverter : NSObject

+ (float)_adjustedLinearPowerLevel:(float)a0 isInput:(BOOL)a1;
+ (float)_linearValueForPowerLevel:(float)a0 shouldAdjustForDeviceType:(BOOL)a1 isInput:(BOOL)a2;
+ (float)_expectedLinearInputPowerLevelMaximum;
+ (float)linearValueForInputPowerLevel:(float)a0;
+ (float)linearValueForOutputPowerLevel:(float)a0;

@end
