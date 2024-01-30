@interface DDFlightPreviewAction : DDRemoteAction {
    BOOL _previewModeSet;
}

+ (id)viewControllerProviderClass;

- (id)previewActions;
- (void)setPreviewMode:(BOOL)a0;
- (id)menuActionClasses;
- (BOOL)wantsCustomViewControllerCommit;
- (id)expandViewController;
- (struct CGSize { double x0; double x1; })suggestedContentSize;

@end
