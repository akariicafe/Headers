@class NSNumber;

@interface WFSmartPromptIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSNumber *authorizationResult;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
