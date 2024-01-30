@class NSString, NSDate;

@interface LogQuantityIntentResponse : INIntentResponse

@property (nonatomic) double doubleValue;
@property (nonatomic, copy) NSString *units;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
