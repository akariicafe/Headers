@interface ReaderFormatActivity : TabDocumentActivity

- (id)activityType;
- (id)activityTitle;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)performActivityWithTabDocument:(id)a0;
- (id)systemImageNameWithTabDocument:(id)a0;
- (id)embeddedActivityViewControllerWithTabDocument:(id)a0;
- (id)_navigationControllerWithTabDocument:(id)a0;

@end
