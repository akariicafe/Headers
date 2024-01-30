@interface SBSUIHardwareButtonEventSceneActionResponse : BSActionResponse

@property (readonly, nonatomic) long long buttonEventHandlingResult;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithButtonEventHandlingResult:(long long)a0 error:(id)a1;

@end
