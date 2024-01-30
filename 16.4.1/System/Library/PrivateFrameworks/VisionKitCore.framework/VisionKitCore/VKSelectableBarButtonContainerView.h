@class UIImage, UIButton;

@interface VKSelectableBarButtonContainerView : UIView

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double padding;
@property (nonatomic) double compactPadding;
@property (nonatomic) double cornerRadiusRatio;
@property (nonatomic) BOOL selected;
@property (nonatomic) double width;

- (void)updateForMiniBarState:(BOOL)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
