@class MUPlaceSectionHeaderView, MUPlaceSectionFooterViewModel, NSArray, MUPlaceSectionHeaderViewModel, NSString, UIView, MUHairlineView, UIFocusGuide, UILayoutGuide;
@protocol UIFocusItem;

@interface MUPlaceSectionView : UIView <MKActivityObserving> {
    MUPlaceSectionHeaderView *_headerView;
    UILayoutGuide *_contentLayoutGuide;
    UIFocusGuide *_contentFocusGuide;
    UIFocusGuide *_footerFocusGuide;
    id<UIFocusItem> _lastFocusItem;
    MUHairlineView *_hairlineView;
    UIView *_footerView;
    BOOL _alwaysHideSeparators;
}

@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *headerViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *footerViewModel;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSArray *focusItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardShadowSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1;
+ (id)cardShadowSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1;
- (void)attachViewToContentView:(id)a0;
- (void)configureWithSectionController:(id)a0;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1 sectionHeaderViewModel:(id)a2 sectionFooterViewModel:(id)a3;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;
- (void)hideBottomSeperator;

@end
