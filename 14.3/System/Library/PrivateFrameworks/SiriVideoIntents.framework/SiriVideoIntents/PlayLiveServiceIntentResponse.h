@class NSString;

@interface PlayLiveServiceIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *punchoutUrl;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
