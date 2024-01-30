@class UIFont, PXAssetsSectionLayoutSpec, UIColor, PXPhotosSectionHeaderLayoutSpec, PXExtendedImageConfiguration, NSString;

@interface PXPhotosLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSpec;
@property (readonly, nonatomic) PXPhotosSectionHeaderLayoutSpec *sectionHeaderSpec;
@property (readonly, nonatomic) double headerTitleLeadingSpacing;
@property (readonly, nonatomic) double headerTitleButtonAlignmentSpacing;
@property (readonly, nonatomic) double headerTitleTopSpacing;
@property (readonly, nonatomic) double headerTitleBottomSpacing;
@property (readonly, nonatomic) UIFont *headerTitleFont;
@property (readonly, nonatomic) UIFont *headerSubtitleFont;
@property (readonly, nonatomic) UIColor *headerTitleOverBackgroundColor;
@property (readonly, nonatomic) UIColor *headerTitleOverContentColor;
@property (readonly, nonatomic) double aspectFitContentVerticalPadding;
@property (readonly, nonatomic) double squareContentVerticalPadding;
@property (readonly, nonatomic) PXExtendedImageConfiguration *backgroundGradientImageConfiguration;
@property (readonly, nonatomic) PXExtendedImageConfiguration *behindContentBackgroundGradientImageConfiguration;
@property (readonly, nonatomic) double interSectionSpacing;
@property (readonly, nonatomic) NSString *visualEffectViewGroupName;
@property (readonly, nonatomic) double interButtonSpacing;
@property (readonly, nonatomic) double endButtonSpacing;
@property (readonly, nonatomic) BOOL isTV;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;

@end
