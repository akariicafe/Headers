@class UIColor, UIFont, PXExtendedImageConfiguration;

@interface PXCuratedLibraryChapterHeaderLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentInset;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) UIColor *titleEmphasizedColor;
@property (readonly, nonatomic) UIColor *floatingTitleEmphasizedColor;
@property (readonly, nonatomic) UIColor *titleDeemphasizedColor;
@property (readonly, nonatomic) UIColor *floatingTitleDeemphasizedColor;
@property (readonly, nonatomic) PXExtendedImageConfiguration *chevronImageConfiguration;
@property (readonly, nonatomic) double spacingBetweenTitleAndChevron;
@property (readonly, nonatomic) double spacingBetweenTitleTopAndPreviousCardBottom;
@property (readonly, nonatomic) double spacingBetweenTitleBottomAndNextCardTop;
@property (readonly, nonatomic) BOOL shouldFloat;
@property (readonly, nonatomic) BOOL shouldAbbreviateMonth;
@property (readonly, nonatomic) double floatingDistanceFromSafeAreaTop;
@property (readonly, nonatomic) double floatingAppearanceCrossfadeStartDistance;
@property (readonly, nonatomic) double floatingAppearanceCrossfadeDistance;
@property (readonly, nonatomic) double floatingAppearanceCrossfadeDuration;
@property (readonly, nonatomic) double floatingFadeOutDistance;
@property (readonly, nonatomic) BOOL shouldAlwaysShowFloatingVersion;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;

@end
