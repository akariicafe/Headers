@interface _CDRateAndTotalLimiter : _CDRateLimiter

@property long long currentTotal;
@property (readonly) long long totalCount;

- (BOOL)credit;
- (id)description;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1 totalCountLimit:(long long)a2;
- (BOOL)debited;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1;

@end
