@interface ToggleContentBlockersActivity : TabDocumentActivity

- (id)activityType;
- (long long)actionType;
- (id)activityTitleWithTabDocument:(id)a0;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)performActivityWithTabDocument:(id)a0;
- (id)systemImageNameWithTabDocument:(id)a0;

@end
