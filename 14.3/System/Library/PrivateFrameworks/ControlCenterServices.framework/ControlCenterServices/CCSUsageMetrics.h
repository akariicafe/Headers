@interface CCSUsageMetrics : NSObject

@property (readonly, nonatomic) unsigned long long userInvocationCount;

+ (id)sharedInstance;

- (void)incrementUserInvocationCount;

@end
