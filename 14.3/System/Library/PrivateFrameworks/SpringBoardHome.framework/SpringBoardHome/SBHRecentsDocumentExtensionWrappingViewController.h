@class NSMapTable, NSMutableArray, _UIRemoteViewController;

@interface SBHRecentsDocumentExtensionWrappingViewController : UIViewController {
    _UIRemoteViewController *_wrappedRemoteViewController;
    NSMutableArray *_constraints;
    NSMapTable *_touchCancellationAssertionsToTokens;
}

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)wrapRemoteViewController:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_updateViewIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;

@end
