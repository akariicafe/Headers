@class PXMonthCardSectionConfigurator, NSShadow, PXMonthChapterSectionConfigurator, PXYearAssetsSectionConfigurator, PXDayAssetsSectionConfigurator, PXAssetsSectionGridConfigurator, PXZoomablePhotosLayoutSpec;

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec {
    PXYearAssetsSectionConfigurator *_yearSectionConfigurator;
    PXMonthCardSectionConfigurator *_monthSectionConfigurator;
    PXMonthChapterSectionConfigurator *_monthsChapterConfigurator;
    PXDayAssetsSectionConfigurator *_daySectionConfigurator;
    PXAssetsSectionGridConfigurator *_gridConfigurator;
    NSShadow *_shadow;
}

@property (readonly, nonatomic) BOOL supportsGridAspectRatioToggle;
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *zoomableSpec;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) double shadowCornerRadius;
@property (readonly, nonatomic) BOOL userInterfaceStyleAllowsShadow;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) BOOL disableConfigurators;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)sectionConfiguratorForAssetCollection:(id)a0 inZoomLevel:(long long)a1;
- (id)gridConfigurator;
- (void).cxx_destruct;
- (long long)numberOfGridZoomStepsWithDataSource:(id)a0;
- (id)_configuratorForZoomLevel:(long long)a0;
- (BOOL)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)a0;

@end
