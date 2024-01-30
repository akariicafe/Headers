@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int currentLabelCompressionLevel;

- (double)updateContentsAndWidth;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (void).cxx_destruct;
- (long long)labelLineBreakMode;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (void)userDidActivateButton:(id)a0;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)a0;
- (BOOL)layoutImageOnTrailingEdge;
- (BOOL)_shouldLayoutImageOnRight;
- (id)accessibilityHUDRepresentation;

@end
