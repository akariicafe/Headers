@class PXTitleSubtitleLabelSpec, NSDateFormatter, PXCuratedLibraryStyleGuide, PXExtendedImageConfiguration;

@interface PXCuratedLibrarySectionHeaderLayoutSpec : PXFeatureSpec

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (nonatomic) BOOL isFloating;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonSpacing;
@property (nonatomic) double buttonHorizontalPadding;
@property (nonatomic) BOOL showZoomButtons;
@property (nonatomic) BOOL showAspectFitButtons;
@property (nonatomic) BOOL wantsTitle;
@property (nonatomic) BOOL wantsSubtitle;
@property (nonatomic) BOOL shouldOmitYear;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titlePadding;
@property (nonatomic) BOOL shouldAvoidOverlapWithSecondaryToolbar;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleLabelSpec;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugInterestingTitleSubtitleLabelSpec;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugNonInterestingTitleSubtitleLabelSpec;
@property (nonatomic) BOOL wantsInlineHeader;
@property (nonatomic) BOOL requiresTitleRenderedAsView;
@property (nonatomic) unsigned long long inlineHeaderStyle;
@property (nonatomic) BOOL swapTitleWithSubtitle;
@property (copy, nonatomic) NSDateFormatter *titleDateFormatter;
@property (copy, nonatomic) NSDateFormatter *subtitleDateFormatter;
@property (nonatomic) BOOL shouldFadeOutWhenReachingTop;
@property (nonatomic) double fadeOutDistanceFromSafeAreaTop;
@property (nonatomic) double fadeOutDistance;
@property (nonatomic) double fadeOutMinimumAlpha;
@property (nonatomic) BOOL shouldAccommodateLeadingButtonsLayout;
@property (nonatomic) double gradientAlpha;
@property (nonatomic) double gradientHeight;
@property (nonatomic) BOOL gradientRespectsSafeArea;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *smallVariantSpec;
@property (readonly, nonatomic) double maximumTitleSubtitleHeight;
@property (readonly, nonatomic) PXExtendedImageConfiguration *headerGradientImageConfiguration;
@property (readonly, nonatomic) double minimumSpacingBetweenTopSafeAreaAndContentTop;
@property (readonly, nonatomic) double minimumSpacingBetweenTopSafeAreaAndTitleTop;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
