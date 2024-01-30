@class UIColor, NSString, UIImageView, UILabel;

@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_disclosureView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL hideDisclosure;

- (void).cxx_destruct;
- (double)_maxWidthForTransactionCellInWidth:(double)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
