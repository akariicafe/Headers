@class NSString, UILabel, UIButton;

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {
    double _rightMargin;
    BOOL _rightMarginAdjusted;
    id _tapTarget;
    SEL _tapAction;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double rightMargin;
@property (readonly) UILabel *label;
@property (readonly) UIButton *button;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)applyLayoutAttributes:(id)a0;

@end
