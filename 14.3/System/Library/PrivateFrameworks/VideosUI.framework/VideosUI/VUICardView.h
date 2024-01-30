@class NSArray, NSString, UIView, VUICardViewLayoutFactory;

@interface VUICardView : UIView

@property (readonly, nonatomic) VUICardViewLayoutFactory *layoutFactory;
@property (copy, nonatomic) id /* block */ imageSize;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) UIView *appImageView;
@property (copy, nonatomic) NSArray *labelViews;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIView *button;
@property (copy, nonatomic) NSString *debugString;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForCellReuse;
- (void)_mainImageLoaded;
- (double)_maxTextWidthForImagePosition:(long long)a0 width:(double)a1 appImageLayout:(id)a2 textLayout:(id)a3;
- (id)_mainImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutFactory:(id)a1;

@end
