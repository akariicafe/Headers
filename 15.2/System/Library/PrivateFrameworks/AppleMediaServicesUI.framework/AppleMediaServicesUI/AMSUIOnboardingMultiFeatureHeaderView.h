@class UILabel, NSArray;

@interface AMSUIOnboardingMultiFeatureHeaderView : UIScrollView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *featureViews;
@property (nonatomic) double containerHeight;
@property (nonatomic) BOOL isPresentedInFormSheet;

- (void)updateContentSize;
- (void)layoutSubviews;
- (id)initWithFeatures:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)adjustedContentInsetDidChange;

@end
