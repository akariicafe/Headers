@class UILabel, UIFont, NSLayoutConstraint;

@interface CPUITitleView : UIView {
    NSLayoutConstraint *_badgeWidthConstraint;
}

@property (retain, nonatomic) UILabel *explicitLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (nonatomic) BOOL shouldUseMusicExplicitGlyph;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupConstraints;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)_createLabelWithTextAlignment:(long long)a0;
- (void)_updateExplicitTreatmentString;

@end
