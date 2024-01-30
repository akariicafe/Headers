@class UIStackView, NSString, NSArray, SFBannerCell, NSLayoutConstraint, SFStartPageSectionHeaderTitleView, SFBannerModel;

@interface SFStartPageSectionHeader : UICollectionReusableView {
    SFBannerCell *_bannerView;
    NSLayoutConstraint *_bannerViewBottomConstraint;
    UIStackView *_buttonStackView;
    NSLayoutConstraint *_titleBottomConstraint;
    SFStartPageSectionHeaderTitleView *_titleView;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) SFBannerModel *banner;
@property (nonatomic) BOOL usesLargeTitle;
@property (nonatomic) double bottomGap;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateViewsDependingOnCustomTraits;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setModel:(id)a0 resolvingActionsUsingBlock:(id /* block */)a1;
- (id)initWithCoder:(id)a0;

@end
