@class NSDictionary;

@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse

@property (readonly, nonatomic) NSDictionary *result;

+ (id)responseWithWatchKitExtensionResult:(id)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithWatchKitExtensionResult:(id)a0;

@end
