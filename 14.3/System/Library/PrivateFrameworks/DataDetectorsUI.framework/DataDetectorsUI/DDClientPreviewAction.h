@interface DDClientPreviewAction : DDPreviewAction

+ (id)clientActionsDelegate;
+ (void)setClientActionsDelegate:(id)a0;
+ (BOOL)clientCanPerformActionWithUrl:(id)a0;

- (id)icon;
- (id)localizedName;
- (id)viewController;
- (id)menuActions;
- (void)performFromView:(id)a0;

@end
