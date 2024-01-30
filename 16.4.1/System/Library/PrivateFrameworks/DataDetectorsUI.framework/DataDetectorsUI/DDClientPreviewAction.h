@interface DDClientPreviewAction : DDPreviewAction

+ (id)clientActionsDelegate;
+ (void)setClientActionsDelegate:(id)a0;
+ (BOOL)clientCanPerformActionWithUrl:(id)a0;

- (id)menuActions;
- (id)localizedName;
- (id)viewController;
- (id)iconName;
- (void)performFromView:(id)a0;

@end
