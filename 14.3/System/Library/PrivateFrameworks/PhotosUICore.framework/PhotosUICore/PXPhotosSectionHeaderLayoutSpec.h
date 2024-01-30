@class UIColor, UIFont, PXExtendedImageConfiguration, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface PXPhotosSectionHeaderLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) UIColor *dividerColor;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) UIColor *subtitleColor;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly, nonatomic) double minimumHeaderContentHeight;
@property (readonly, nonatomic) double titleHorizontalInset;
@property (readonly, nonatomic) double titleSubtitleHorizontalSpacing;
@property (readonly, nonatomic) double dividerBaselineToTextBaselineSpacing;
@property (readonly, nonatomic) double chevronSpacing;
@property (readonly, nonatomic) struct CGSize { double width; double height; } chevronSize;
@property (readonly, nonatomic) double chevronAlpha;
@property (readonly, nonatomic) PXExtendedImageConfiguration *chevronImageConfiguration;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double gradientAlpha;
@property (readonly, nonatomic) double gradientOverhang;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *curatedLibraryHeaderSpec;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
