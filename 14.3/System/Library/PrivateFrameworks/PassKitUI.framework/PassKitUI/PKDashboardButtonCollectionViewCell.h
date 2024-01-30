@class NSString, UILabel, UIActivityIndicatorView;

@interface PKDashboardButtonCollectionViewCell : PKDashboardCollectionViewCell {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showActivity;
@property (nonatomic) BOOL enabled;

- (void)createSubviews;
- (void)_updateTextColor;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_resetFonts;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
