@class NSDate;

@interface LogPeriodIntentResponse : INIntentResponse

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long flow;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
