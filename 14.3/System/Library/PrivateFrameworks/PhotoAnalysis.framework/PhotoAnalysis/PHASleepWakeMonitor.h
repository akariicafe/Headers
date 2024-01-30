@interface PHASleepWakeMonitor : NSObject

@property unsigned int powerAssertionID;

+ (BOOL)isSystemInDarkWake;

- (void)releaseUserIdlePowerAssertion;
- (void)takeUserIdlePowerAssertion;

@end
