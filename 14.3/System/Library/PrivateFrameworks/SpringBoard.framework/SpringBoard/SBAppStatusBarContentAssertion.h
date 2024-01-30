@class UIStatusBar;

@interface SBAppStatusBarContentAssertion : BSSimpleAssertion

@property (retain, nonatomic) UIStatusBar *statusBar;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1;
- (void)hideStatusBarPartLeading:(BOOL)a0;

@end
