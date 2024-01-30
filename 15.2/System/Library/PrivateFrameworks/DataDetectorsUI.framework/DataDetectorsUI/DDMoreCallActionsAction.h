@interface DDMoreCallActionsAction : DDMoreActionsAction

+ (BOOL)isAvailable;

- (id)iconName;
- (id)alertActions;
- (id)callProviderActions;
- (id)variantIconName;

@end
