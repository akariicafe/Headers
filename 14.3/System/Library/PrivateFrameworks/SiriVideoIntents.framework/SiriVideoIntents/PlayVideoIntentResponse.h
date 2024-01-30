@class NSURL;

@interface PlayVideoIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSURL *urlToLaunch;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
