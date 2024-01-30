@class SBSUserNotificationColorDefinition, NSString, SBSUserNotificationAssetDefinition, SBSUserNotificationImageDefinition, NSNumber;

@interface SBSUserNotificationSystemApertureContentDefinition : NSObject

@property (copy, nonatomic) SBSUserNotificationImageDefinition *leadingImageDefinition;
@property (copy, nonatomic) NSString *keyColorName;
@property (copy, nonatomic) NSString *alertHeaderColorName;
@property (copy, nonatomic) NSString *alertHeader;
@property (copy, nonatomic) NSString *alertMessage;
@property (copy, nonatomic) SBSUserNotificationColorDefinition *alertHeaderColor;
@property (copy, nonatomic) SBSUserNotificationColorDefinition *keyColor;
@property (copy, nonatomic) NSNumber *alertTextAlignment;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *alternateButtonTitle;
@property (copy, nonatomic) SBSUserNotificationAssetDefinition *leadingAssetDefinition;
@property (nonatomic) BOOL preventsAutomaticDismissal;

- (id)_initWithDictionary:(id)a0;
- (id)build;
- (void).cxx_destruct;

@end
