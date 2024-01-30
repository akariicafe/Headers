@interface MediaCaptureActivity : TabDocumentActivity

- (id)activityType;
- (id)_activityStatusTintColor;
- (BOOL)_wantsOriginalImageColor;
- (void)performActivityWithTabDocument:(id)a0;
- (id)activityImageWithTabDocument:(id)a0;
- (id)activityTitleWithTabDocument:(id)a0;
- (BOOL)canPerformWithTabDocument:(id)a0;

@end
