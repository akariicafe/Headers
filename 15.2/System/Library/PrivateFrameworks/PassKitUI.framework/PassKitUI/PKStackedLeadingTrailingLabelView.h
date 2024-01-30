@class NSString, UILabel;

@interface PKStackedLeadingTrailingLabelView : UIView {
    UILabel *_leadingPrimaryLabel;
    UILabel *_leadingSecondaryLabel;
    UILabel *_trailingPrimaryLabel;
    UILabel *_trailingSecondaryLabel;
}

@property (copy, nonatomic) NSString *leadingPrimaryText;
@property (copy, nonatomic) NSString *leadingSecondaryText;
@property (copy, nonatomic) NSString *trailingPrimaryText;
@property (copy, nonatomic) NSString *trailingSecondaryText;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
