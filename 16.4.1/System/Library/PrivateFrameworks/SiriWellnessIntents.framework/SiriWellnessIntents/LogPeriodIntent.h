@class NSDate;

@interface LogPeriodIntent : INIntent

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long flow;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
