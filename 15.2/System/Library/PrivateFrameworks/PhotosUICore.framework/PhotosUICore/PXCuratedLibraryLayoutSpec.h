@class PXAssetsSectionLayoutSpec, PXYearsLayoutMetrics, PXCuratedLibrarySectionHeaderLayoutSpec, PXMonthsLayoutMetrics, PXExtendedImageConfiguration;

@interface PXCuratedLibraryLayoutSpec : PXFeatureSpec {
    double _estimatedSpacingBetweenMonths;
    double _spacingBetweenYears;
    double _spacingBetweenMonths;
    double _spacingBetweenDays;
}

@property (readonly, nonatomic) long long axis;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *yearsTopHeaderSpec;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *monthsTopHeaderSpec;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *daysTopHeaderSpec;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *allPhotosFloatingHeaderSpec;
@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *sectionLayoutSpec;
@property (readonly, nonatomic) PXYearsLayoutMetrics *yearsLayoutMetrics;
@property (readonly, nonatomic) PXMonthsLayoutMetrics *monthsLayoutMetrics;
@property (readonly, nonatomic) double spacingBetweenSafeAreaTopAndFirstYearCard;
@property (readonly, nonatomic) double spacingBetweenSafeAreaTopAndFirstMonthTitle;
@property (readonly, nonatomic) double spacingBetweenHeaderLastBaselineAndAllPhotosTop;
@property (readonly, nonatomic) BOOL isTopSafeAreaFullyCovered;
@property (readonly, nonatomic) BOOL allowsPaginatedScrollingInYearsAndMonths;
@property (readonly, nonatomic) BOOL allowsSlideshowInYears;
@property (readonly, nonatomic) PXExtendedImageConfiguration *statusBarGradientImageConfiguration;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (double)defaultInterlayoutSpacingForZoomLevel:(long long)a0;
- (void).cxx_destruct;

@end
