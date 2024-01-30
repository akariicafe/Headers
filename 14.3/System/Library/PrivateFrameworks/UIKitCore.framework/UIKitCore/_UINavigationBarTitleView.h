@class _UINavigationBarTitleViewOverlayRects, NSArray, NSString, NSLayoutConstraint, UINavigationItem, UIMenu;
@protocol _UINavigationBarTitleViewDataSource;

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView> {
    NSLayoutConstraint *_heightConstraint;
    _UINavigationBarTitleViewOverlayRects *_overlayRects;
    id<_UINavigationBarTitleViewDataSource> _dataSource;
}

@property (readonly, weak, nonatomic) UINavigationItem *navigationItem;
@property (readonly, nonatomic) long long titleLocation;
@property (nonatomic) BOOL underlayBarContent;
@property (nonatomic) double height;
@property (nonatomic) double backButtonMaximumWidth;
@property (nonatomic) BOOL hideBackButton;
@property (nonatomic) BOOL hideLeadingBarButtons;
@property (nonatomic) BOOL hideStandardTitle;
@property (nonatomic) BOOL hideTrailingBarButtons;
@property (nonatomic) double backButtonAlpha;
@property (nonatomic) double leadingBarAlpha;
@property (nonatomic) double trailingBarAlpha;
@property (readonly, copy, nonatomic) NSArray *contentOverlayRects;
@property (readonly, nonatomic) long long leadingOverlayCount;
@property (readonly, nonatomic) long long trailingOverlayCount;
@property (readonly, nonatomic) double largeTitleHeight;
@property (readonly, nonatomic) struct { double x0; double x1; } largeTitleHeightRange;
@property (readonly, nonatomic) double contentBaselineOffsetFromTop;
@property (readonly, nonatomic) double contentBaseHeight;
@property (nonatomic) long long preferredContentAlignment;
@property (readonly, copy, nonatomic) UIMenu *backButtonMenu;
@property (readonly, nonatomic) BOOL _underlayNavigationBarContent;
@property (readonly, nonatomic) double _navigationBarContentHeight;
@property (readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property (readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property (readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property (readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property (readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property (readonly, nonatomic) double _navigationBarBackButtonAlpha;
@property (readonly, nonatomic) double _navigationBarLeadingBarButtonsAlpha;
@property (readonly, nonatomic) double _navigationBarTrailingBarButtonsAlpha;
@property (readonly, nonatomic) long long _preferredAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionCompleted:(long long)a0 willBeDisplayed:(BOOL)a1;
- (void)transitionWillBegin:(long long)a0 willBeDisplayed:(BOOL)a1;
- (long long)preferredContentSizeForSize:(long long)a0;
- (void)_navigationBarTraitCollectionDidChangeTo:(id)a0 from:(id)a1;
- (void)_navigationBarTransitionWillBegin:(long long)a0 willBeDisplayed:(BOOL)a1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (void)contentDidChange;
- (void)_performNavigationBarTransition:(long long)a0 willBeDisplayed:(BOOL)a1;
- (BOOL)_wantsTwoPartTransition;
- (void)_setDataSource:(id)a0 navigationItem:(id)a1 titleLocation:(long long)a2;
- (void)_navigationBarTransitionCompleted:(long long)a0 willBeDisplayed:(BOOL)a1;
- (id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)a0;
- (long long)_preferredContentSizeForSize:(long long)a0;
- (void)_contentDidChange;
- (void)performTransition:(long long)a0 willBeDisplayed:(BOOL)a1;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChange;
- (void)navigationBarTraitCollectionDidChangeTo:(id)a0 from:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
