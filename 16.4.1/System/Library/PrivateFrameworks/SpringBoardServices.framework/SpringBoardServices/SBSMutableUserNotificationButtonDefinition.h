@class NSString;

@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int presentationStyle;
@property (nonatomic) BOOL isPreferredButton;

- (void)setPresentationStyle:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitle:(id)a0;
- (void)setIsPreferredButton:(BOOL)a0;

@end
