@class PXPhotosLayoutSpecManager, NSString, UIView, PXNumberAnimator, PXPhotosSectionedLayout, NSDictionary, PXPhotosViewModel, PXGSingleViewLayout, PXGLayout;
@protocol PXPhotosSectionBodyLayoutProvider, PXPhotosLayoutDelegate, PXPhotosSectionedLayoutHeader, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosLayout : PXGStackLayout <PXChangeObserver, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate, PXGStringSource, PXGNamedImageSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    BOOL _isUpdatingSublayouts;
    unsigned short _headerTitleVersion;
    unsigned short _backgroundGradientResizableCapInsetsIndex;
    PXNumberAnimator *_alternateAppearanceMixAnimator;
    BOOL _managesHeaderSprites;
    BOOL _presentedVisibility;
    PXPhotosSectionedLayout *_sectionedLayout;
    BOOL _footerHasAppearedInitially;
    PXNumberAnimator *_headerFooterAlphaAnimator;
    PXGLayout<PXPhotosSectionedLayoutHeader> *_topHeaderLayout;
    PXGSingleViewLayout *_headerLayout;
    PXGSingleViewLayout *_footerLayout;
    struct { BOOL createTopHeaderLayoutForDataSource; BOOL topHeaderLayoutDidChangeDataSource; BOOL configureTopHeaderLayout; } _headerProviderRespondsTo;
}

@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubtitle;
@property (copy, nonatomic) NSDictionary *headerTitleOverContentAttributes;
@property (copy, nonatomic) NSDictionary *headerTitleOverBackgroundAttributes;
@property (copy, nonatomic) NSDictionary *headerSubtitleOverBackgroundAttributes;
@property (copy, nonatomic) NSDictionary *headerSubtitleOverContentAttributes;
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
@property (nonatomic) long long pendingHideAnimationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentedDataSource;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)didUpdate;
- (void)_updateFooter;
- (void)_updateLocalSprites;
- (void)_updateHeaderMeasurements;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLocalSpritesCount;
- (void)_invalidateFooter;
- (id)createDefaultAnimationForCurrentContext;
- (void)_updateHeader;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)enumerateItemsGeometriesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 usingBlock:(id /* block */)a2;
- (void)_invalidateHeaderTitle;
- (void)_updateContentBelowTitle;
- (BOOL)appliesAlphaToSublayouts;
- (void)_updateHeaderFooterAlphaAnimator;
- (void)_invalidateLocalSprites;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)createAnchorForScrollingToInitialPosition;
- (void)_invalidateTopHeaderLayout;
- (id)presentedItemsGeometryForSection:(unsigned long long)a0 inDataSource:(id)a1;
- (id)regionOfInterestForAssetReference:(id)a0;
- (void)hideSpritesForObjectReferences:(id)a0;
- (id)axSpriteIndexes;
- (struct CGSize { double x0; double x1; })_headerTitleSize;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateHeaderAttributes;
- (void)_updateHeaderTitle;
- (double)_headerSubtitleLineHeight;
- (void)safeAreaInsetsDidChange;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_informTopHeaderLayoutAboutDataSourceChange;
- (void)update;
- (void)_invalidateContentBelowTitle;
- (void)_updateTopHeaderLayout;
- (void)_invalidateHeader;
- (void)visibleRectDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_invalidateSectionedLayout;
- (void)_invalidateHeaderMeasurements;
- (struct CGSize { double x0; double x1; })_headerTitleReferenceSize;
- (void)_invalidateHeaderAttributes;
- (void)_updateHeaderOrigin;
- (void)_invalidateDynamicHeaderTitle;
- (void)_invalidateLocalSpritesCount;
- (void)invalidateFooterHeight;
- (void)_updateLocalSpritesAlpha;
- (void)photosSectionHeaderLayoutInvalidateConfiguredLayouts:(id)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (unsigned long long)fullyVisibleEdgesWithDefaultTolerance;
- (id)topmostSectionHeaderSnapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willUpdate;
- (void)referenceSizeDidChange;
- (double)_headerTitleLineHeight;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (BOOL)_shouldShowSectionedLayout;
- (void).cxx_destruct;
- (void)_updateSectionedLayout;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsetsForSublayout:(id)a0;
- (void)_invalidateLocalSpritesAlpha;
- (void)screenScaleDidChange;
- (id)initWithViewModel:(id)a0 specManager:(id)a1;

@end
