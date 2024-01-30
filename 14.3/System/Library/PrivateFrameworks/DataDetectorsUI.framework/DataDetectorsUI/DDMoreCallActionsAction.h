@interface DDMoreCallActionsAction : DDMoreActionsAction

+ (BOOL)isAvailable;

- (id)icon;
- (id)alertActions;
- (id)callProviderActions;

@end
