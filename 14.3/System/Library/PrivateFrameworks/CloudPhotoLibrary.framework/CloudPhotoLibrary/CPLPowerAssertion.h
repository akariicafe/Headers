@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_releaseAssertion;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_retainAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (id)powerAssertionStatus;

@end
