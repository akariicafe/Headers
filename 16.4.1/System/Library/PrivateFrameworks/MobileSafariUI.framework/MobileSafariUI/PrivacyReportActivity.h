@interface PrivacyReportActivity : TabDocumentActivity

- (id)activityTitle;
- (id)activityType;
- (long long)actionType;
- (id)_systemImageName;
- (void)performActivityWithTabDocument:(id)a0;
- (id)_createPrivacyReportViewControllerWithURL:(id)a0;
- (BOOL)canPerformOnNewTabPage;

@end
