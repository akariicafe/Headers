@class UIStackView, UIView, UILabel, PRComplicationGalleryApplicationTitleView, NSString, UIImage, UIButton, NSArray, MTMaterialView, NSLayoutConstraint, UIPageControl, BSUIScrollView;
@protocol PRComplicationGalleryDetailViewDelegate;

@interface PRComplicationGalleryDetailView : UIView <BSUIScrollViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) BSUIScrollView *contentScrollView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) PRComplicationGalleryApplicationTitleView *titleView;
@property (retain, nonatomic) UIStackView *complicationGalleryStackView;
@property (retain, nonatomic) BSUIScrollView *complicationGalleryScrollView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) UILabel *instructionsLabel;
@property (retain, nonatomic) UIView *footerContainerView;
@property (retain, nonatomic) MTMaterialView *magicPocketBackgroundView;
@property (retain, nonatomic) UIView *footerStackSpacerView;
@property (retain, nonatomic) NSLayoutConstraint *widgetGalleryHeightConstraint;
@property (nonatomic) BOOL performedInitialSelection;
@property (weak, nonatomic) id<PRComplicationGalleryDetailViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSArray *pages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContent;
- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_createViews;
- (void)_addFooterConstraints;
- (void)_createPageControlIfNecessary;
- (id)_instructionsLabelFont;
- (unsigned long long)_pageIndexAtContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_scrollToPageIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_updatePageControlForContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_updatePageViewControllerAppearanceForNormalScroll;
- (void)_updatePageViewControllerAppearanceWithAppearedBlock:(id /* block */)a0;
- (void)closeButtonTapped:(id)a0;
- (void)pageControlChanged:(id)a0;

@end
