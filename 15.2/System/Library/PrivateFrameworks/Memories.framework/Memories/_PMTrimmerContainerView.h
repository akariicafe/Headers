@class UIView;

@interface _PMTrimmerContainerView : UIView

@property (retain, nonatomic) UIView *movieScrubber;
@property (retain, nonatomic) UIView *debugOverlay;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
