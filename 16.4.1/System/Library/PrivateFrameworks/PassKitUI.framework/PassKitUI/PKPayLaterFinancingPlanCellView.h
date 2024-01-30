@class UIImageView, PKPayLaterFinancingPlan, UILabel, UIActivityIndicatorView, PKProgressBar;

@interface PKPayLaterFinancingPlanCellView : UIView {
    PKPayLaterFinancingPlan *_financingPlan;
    unsigned long long _context;
    struct CGSize { double width; double height; } _disclosureViewSize;
    long long _rowIndex;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinner;
    PKProgressBar *_progressBar;
}

@property (nonatomic) BOOL showSpinner;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (id)initWithFinancingPlan:(id)a0 context:(unsigned long long)a1 rowIndex:(long long)a2;

@end
