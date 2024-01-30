@interface DDFlightPreviewAction : DDRemoteAction {
    BOOL _previewModeSet;
}

+ (id)viewControllerProviderClass;

- (void)setPreviewMode:(BOOL)a0;
- (id)previewActions;
- (BOOL)wantsCustomViewControllerCommit;
- (id)expandViewController;
- (id)menuActionClasses;
- (struct CGSize { double x0; double x1; })suggestedContentSize;

@end
