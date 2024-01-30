@interface MediaCaptureActivity : TabDocumentActivity

- (id)activityType;
- (BOOL)_wantsOriginalImageColor;
- (id)_activityStatusTintColor;
- (id)activityTitleWithTabDocument:(id)a0;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)performActivityWithTabDocument:(id)a0;
- (id)activityImageWithTabDocument:(id)a0;

@end
