@class NSDate;

@interface TSULogHelper : NSObject

@property unsigned long long throttleCount;
@property (retain) NSDate *lastThrottleCheck;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)incrementThrottleCountAndCheckThottleMax:(unsigned long long)a0;

@end
