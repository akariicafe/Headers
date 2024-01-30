@class NSString;

@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int presentationStyle;
@property (nonatomic) BOOL isPreferredButton;

- (void)setIsPreferredButton:(BOOL)a0;
- (void)setPresentationStyle:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitle:(id)a0;

@end
