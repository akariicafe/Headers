@class UIColor, NSString, PKConnectedCircleView, UILabel, PKGradientVerticalConnector, PKConnectedCircleTarget;

@interface PKConnectedCollectionViewCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    PKConnectedCircleView *_circleView;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (retain, nonatomic) PKGradientVerticalConnector *topConnector;
@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector;
@property (retain, nonatomic) PKConnectedCircleTarget *target;

+ (double)textInsetWithOuterRadius:(double)a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_configureView;

@end
