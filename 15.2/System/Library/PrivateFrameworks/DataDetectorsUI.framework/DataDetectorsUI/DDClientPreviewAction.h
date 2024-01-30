@interface DDClientPreviewAction : DDPreviewAction

+ (id)clientActionsDelegate;
+ (void)setClientActionsDelegate:(id)a0;
+ (BOOL)clientCanPerformActionWithUrl:(id)a0;

- (id)localizedName;
- (id)menuActions;
- (id)viewController;
- (id)iconName;
- (void)performFromView:(id)a0;

@end
