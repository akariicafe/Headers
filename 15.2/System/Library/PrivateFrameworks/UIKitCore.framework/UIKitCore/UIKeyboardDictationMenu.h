@interface UIKeyboardDictationMenu : UIKeyboardMenuView

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)fade;
- (void)willShow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fadeWithDelay:(double)a0;
- (BOOL)usesTable;
- (struct CGSize { double x0; double x1; })preferredSize;
- (void)cleanupForFadeOrHide;
- (BOOL)centerPopUpOverKey;
- (void)performShowAnimation;
- (BOOL)usesDimmingView;
- (void)hide;

@end
