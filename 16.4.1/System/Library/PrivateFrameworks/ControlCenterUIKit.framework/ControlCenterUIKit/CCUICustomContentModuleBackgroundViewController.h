@class UIView, NSString, UIImageView, NSMutableDictionary, UILabel, CCUICAPackageView, NSArray;

@interface CCUICustomContentModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController> {
    UILabel *_headerTitleLabel;
    UIImageView *_headerImageView;
    CCUICAPackageView *_packageView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
    NSArray *_footerButtons;
    UIView *_customHeaderView;
    UIView *_customFooterView;
}

@property (nonatomic) double expandedContentModuleHeight;
@property (nonatomic) double expandedContentModuleWidth;
@property (nonatomic) BOOL positionHeaderToRightInLandscapeRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)setGlyphImage:(id)a0;
- (void)setGlyphPackageDescription:(id)a0;
- (id)_titleFont;
- (void)setGlyphState:(id)a0;
- (void)_visualStylingProvider:(id)a0 didChangeForCategory:(long long)a1 outgoingVisualStylingProvider:(id)a2;
- (void)setHeaderTitle:(id)a0;
- (id)requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)_updateTitleFont;
- (void).cxx_destruct;
- (void)setCustomHeaderView:(id)a0;
- (void)setFooterButtons:(id)a0;
- (BOOL)_shouldLimitContentSizeCategory;
- (struct CGPoint { double x0; double x1; })_footerCenterForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_headerCenterForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCustomFooterViewLayoutIfNecessary;
- (void)_updateCustomHeaderViewLayoutIfNecessary;
- (void)_updateFooterButtonsLayoutIfNecessary;
- (void)_updateHeaderGlyphVisualStylingWithProvider:(id)a0;
- (void)_updateHeaderLayoutIfNecessary;
- (void)setCustomFooterView:(id)a0;
- (void)setHeaderGlyphImage:(id)a0;
- (void)setHeaderGlyphPackageDescription:(id)a0;
- (void)setHeaderGlyphState:(id)a0;

@end
