@class UIStatusBar;

@interface SBAppStatusBarContentAssertion : BSSimpleAssertion {
    UIStatusBar *_statusBar;
}

@property (readonly, nonatomic, getter=isStatusBarPartLeadingHidden) BOOL statusBarPartLeadingHidden;
@property (readonly, nonatomic, getter=isStatusBarPartTrailingHidden) BOOL statusBarPartTrailingHidden;

- (void)_setStatusBarPartIdentifier:(id)a0 hidden:(BOOL)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)setStatusBarPartLeadingHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setStatusBarPartTrailingHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1 forReason:(id)a2;

@end
