@class UIImage, UIButton;

@interface VKSelectableBarButtonContainerView : UIView

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double padding;
@property (nonatomic) double compactPadding;
@property (nonatomic) double cornerRadiusRatio;
@property (nonatomic) BOOL selected;
@property (nonatomic) double width;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (void)updateForMiniBarState:(BOOL)a0;
- (void)didMoveToWindow;

@end
