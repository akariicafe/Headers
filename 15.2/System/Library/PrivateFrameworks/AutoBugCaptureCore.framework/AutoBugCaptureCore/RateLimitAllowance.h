@class NSDate;

@interface RateLimitAllowance : NSObject

@property (retain, nonatomic) NSDate *lastCheckedAt;
@property (nonatomic) double allowance;

- (void).cxx_destruct;

@end
