@class UIStackView, NSString, NSArray, SFBannerCell, UILabel;

@interface SFStartPageSectionHeader : UICollectionReusableView {
    SFBannerCell *_bannerView;
    UIStackView *_buttonStackView;
    NSArray *_constraintsWithBanner;
    NSArray *_constraintsWithoutBanner;
    UILabel *_titleLabel;
    BOOL _usesBanner;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *actions;

- (void)_tap:(id)a0;
- (void).cxx_destruct;
- (void)_addButtonWithTitle:(id)a0 actionIndex:(long long)a1;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)setModel:(id)a0 resolvingActionsUsingBlock:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
