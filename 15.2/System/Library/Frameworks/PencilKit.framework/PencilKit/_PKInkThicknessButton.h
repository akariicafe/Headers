@class UIImageView, UIImage, NSString;

@interface _PKInkThicknessButton : UIControl

@property (retain, nonatomic) UIImageView *inkImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastRenderedBounds;
@property (retain, nonatomic) UIImage *assetImage;
@property (readonly, nonatomic) NSString *inkIdentifier;
@property (readonly, nonatomic) double weight;

+ (struct CGSize { double x0; double x1; })buttonSize;
+ (id)backgroundColorForIsSelected:(BOOL)a0 highlighted:(BOOL)a1;
+ (id)imageTintColorForIsSelected:(BOOL)a0 highlighted:(BOOL)a1;

- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithInkIdentifier:(id)a0 weight:(double)a1;
- (void)didTouchUpInside;
- (void)_animateToHighlightedState:(BOOL)a0;

@end
