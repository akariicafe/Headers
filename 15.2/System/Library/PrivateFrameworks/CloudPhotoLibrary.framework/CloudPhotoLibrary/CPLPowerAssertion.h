@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_releaseAssertion;
+ (id)powerAssertionStatus;
+ (void)disableSleep;
+ (void)enableSleep;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_retainAssertion;

@end
