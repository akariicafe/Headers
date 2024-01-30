@interface BKUIUtils : NSObject

+ (long long)activeInterfaceOrientationForView:(id)a0;
+ (BOOL)containerEnrollmentStyleEnabled;
+ (id)nameForMessage:(unsigned int)a0;
+ (void)resetScreenDimming;
+ (void)vibrateForBiometricEvent:(BOOL)a0;
+ (void)vibrateWithIntensity:(float)a0 withPattern:(id)a1;

@end
