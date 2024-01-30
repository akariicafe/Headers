@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int currentLabelCompressionLevel;

- (double)updateContentsAndWidth;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (long long)labelLineBreakMode;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (void)userDidActivateButton:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)a0;
- (id)accessibilityHUDRepresentation;
- (BOOL)layoutImageOnTrailingEdge;
- (BOOL)_shouldLayoutImageOnRight;

@end
