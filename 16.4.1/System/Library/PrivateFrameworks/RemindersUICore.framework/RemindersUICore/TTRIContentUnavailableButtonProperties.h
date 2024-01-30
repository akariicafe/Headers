@class UIAction;

@interface TTRIContentUnavailableButtonProperties : TTRIUIContentUnavailableShim

@property (copy, nonatomic) UIAction *primaryAction;

+ (Class)implClass;

- (id)asUIKit;

@end
