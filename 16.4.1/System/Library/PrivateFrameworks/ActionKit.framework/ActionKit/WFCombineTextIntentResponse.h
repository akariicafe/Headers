@class NSString;

@interface WFCombineTextIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *text;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
