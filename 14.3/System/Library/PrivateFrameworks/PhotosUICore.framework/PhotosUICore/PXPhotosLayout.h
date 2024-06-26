@class PXPhotosLayoutSpecManager, NSString, UIView, PXNumberAnimator, PXPhotosSectionedLayout, NSDictionary, PXPhotosViewModel, PXGSingleViewLayout;
@protocol PXPhotosSectionBodyLayoutProvider, PXPhotosLayoutDelegate, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosLayout : PXGStackLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _postUpdateFlags;
    unsigned short _headerTitleVersion;
    unsigned short _backgroundGradientResizableCapInsetsIndex;
    PXNumberAnimator *_alternateAppearanceMixAnimator;
    BOOL _wantsCustomNavBarStyle;
    BOOL _presentedVisibility;
    PXPhotosSectionedLayout *_sectionedLayout;
    BOOL _footerHasAppearedInitially;
    PXNumberAnimator *_headerFooterAlphaAnimator;
    PXGSingleViewLayout *_headerLayout;
    PXGSingleViewLayout *_footerLayout;
}

@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSDictionary *headerTitleOverContentAttributes;
@property (copy, nonatomic) NSDictionary *headerTitleOverBackgroundAttributes;
@property (readonly, nonatomic) long long headerTitleDrawingOptions;
@property (nonatomic) struct CGPoint { double x; double y; } headerTitleOrigin;
@property (nonatomic) struct CGSize { double width; double height; } headerTitleSize;
@property (nonatomic) double headerTitleBaselineToBottom;
@property (nonatomic) double backgroundSpriteHeight;
@property (nonatomic) double backgroundGradientAdditionalCoverage;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXPhotosLayoutSpecManager *specManager;
@property (weak, nonatomic) id<PXPhotosLayoutDelegate> delegate;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) id<PXPhotosSectionHeaderLayoutProvider> sectionHeaderProvider;
@property (retain, nonatomic) id<PXPhotosSectionBodyLayoutProvider> sectionBodyProvider;
@property (readonly, nonatomic) struct PXFloatRange { double x0; double x1; } topCollapsibleArea;
@property (readonly, nonatomic) struct PXFloatRange { double x0; double x1; } bottomCollapsibleArea;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) BOOL wantsHeaderInSafeArea;
@property (nonatomic) BOOL alignsHeaderTitleWithLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)safeAreaInsetsDidChange;
- (id)presentedDataSource;
- (void)_updateHeaderFooterAlphaAnimator;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)referenceSizeDidChange;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (void)_invalidateSectionedLayout;
- (void)_updateHeaderTitle;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axSpriteIndexes;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)createAnchorForScrollingToInitialPosition;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateFooter;
- (void)_updateHeaderMeasurements;
- (void)_updateLocalSpritesAlpha;
- (id)presentedItemsGeometryForSection:(unsigned long long)a0 inDataSource:(id)a1;
- (void)screenScaleDidChange;
- (void)_updateHeaderAttributes;
- (void)_invalidateHeaderMeasurements;
- (void)update;
- (void)_invalidateHeaderTitle;
- (void)visibleRectDidChange;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithViewModel:(id)a0 specManager:(id)a1;
- (void)invalidateFooterHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsetsForSublayout:(id)a0;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)createDefaultAnimationForCurrentContext;
- (void)enumerateItemsGeometriesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 usingBlock:(id /* block */)a2;
- (void)_updateFooter;
- (void)_updateHeader;
- (void)_invalidateLocalSpritesAlpha;
- (void)_invalidateHeader;
- (unsigned long long)fullyVisibleEdgesWithDefaultTolerance;
- (void)_invalidateHeaderAttributes;
- (void)_updateSectionedLayout;
- (void)_updateLocalSprites;
- (id)topmostSectionHeaderSnapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateLocalSprites;

@end
