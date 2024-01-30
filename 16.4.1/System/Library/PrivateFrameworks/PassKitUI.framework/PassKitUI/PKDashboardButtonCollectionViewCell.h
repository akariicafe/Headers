@class NSString, UILabel, UIActivityIndicatorView;

@interface PKDashboardButtonCollectionViewCell : PKDashboardCollectionViewCell {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showActivity;
@property (nonatomic) BOOL enabled;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateTextColor;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetFonts;
- (void)createSubviews;

@end
