@class LNConnectionActionResponse;

@interface UILinkConnectionActionResponse : BSActionResponse

@property (readonly, nonatomic) LNConnectionActionResponse *actionResponse;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithActionResponse:(id)a0;

@end
