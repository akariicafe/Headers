@interface UIKeyboardDictationMenu : UIKeyboardMenuView

+ (id)sharedInstance;
+ (id)activeInstance;

- (void)fade;
- (void)willShow;
- (BOOL)usesTable;
- (void)hide;
- (void)fadeWithDelay:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)usesDimmingView;
- (void)cleanupForFadeOrHide;
- (BOOL)centerPopUpOverKey;
- (void)performShowAnimation;
- (struct CGSize { double x0; double x1; })preferredSize;

@end
