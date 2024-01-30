@class NSArray, NSString;

@interface WFMatchTextIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *matches;
@property (copy, nonatomic) NSString *errorDescription;

+ (id)invalidRegularExpressionIntentResponseWithErrorDescription:(id)a0;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
