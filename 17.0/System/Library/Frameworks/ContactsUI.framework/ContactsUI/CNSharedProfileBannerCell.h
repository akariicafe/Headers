@class CNSharedProfileBannerView;
@protocol CNSharedProfileBannerViewDelegate;

@interface CNSharedProfileBannerCell : CNContactCell

@property (retain, nonatomic) CNSharedProfileBannerView *sharedProfileBannerContentView;
@property (weak, nonatomic) id<CNSharedProfileBannerViewDelegate> delegate;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)minCellHeight;
- (void)setLabelTextAttributes:(id)a0;
- (void)setUpView;
- (void)setUpWithSharedProfileStateOracle:(id)a0 tappedAction:(unsigned long long)a1 hasPerformedAnimation:(BOOL)a2;
- (id)variableConstraints;

@end
