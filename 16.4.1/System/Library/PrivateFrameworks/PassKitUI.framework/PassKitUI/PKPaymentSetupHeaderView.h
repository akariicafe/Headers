@class NSString, UILabel;

@interface PKPaymentSetupHeaderView : UICollectionReusableView {
    UILabel *_label;
}

@property (retain, nonatomic) NSString *title;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_leadingPadding;

@end
