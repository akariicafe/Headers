@class UIStackView, NSArray, NSNumber, UIGestureRecognizer;

@interface DOCTagColorPicker : UIView

@property (readonly, nonatomic) NSArray *dotViews;
@property (retain, nonatomic) NSNumber *previousSelectedTagColor;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) long long selectedTagColor;
@property (readonly, nonatomic) UIGestureRecognizer *changeColorTapGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setSelectedTagColorForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)handleChangeColor:(id)a0;
- (id)selectedTagDotView;
- (void)setColorDotSpacing;

@end
