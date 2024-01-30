@interface UIWillPresentNotificationActionResponse : BSActionResponse

@property (readonly, nonatomic) unsigned long long options;

+ (id)responseWithOptions:(unsigned long long)a0;

- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithOptions:(unsigned long long)a0;

@end
