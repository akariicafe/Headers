@class NSArray;

@interface NextEventComplicationConfigurationIntentResponse : INIntentResponse

@property (nonatomic, copy) NSArray *calendars;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
