@class SFSearchResult_SpotlightExtras, NSArray, SPSearchQueryContext;

@interface SSResultBuilder : NSObject

@property (retain, nonatomic) SFSearchResult_SpotlightExtras *result;
@property (retain, nonatomic) NSArray *matchedStrings;
@property (nonatomic) BOOL isTopHit;
@property (retain, nonatomic) SPSearchQueryContext *queryContext;

+ (id)bundleId;
+ (id)richTextsFromStrings:(id)a0;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;
+ (Class)resultBuilderClassForResult:(id)a0;
+ (void)setMaxLinesForDescriptions:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultThumbnailSize;
+ (id)resultBuilderWithResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildDetailedRowCardSection;
- (id)buildInlineCardSection;
- (id)coreSpotlightId;
- (id)buildThumbnail;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildPunchouts;
- (id)buildCommand;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildResult;
- (id)buildPreviewButtonItems;
- (id)buildInlineCardSections;
- (id)buildTitle;
- (id)buildCompactCard;
- (id)buildInlineCard;
- (id)buildHighlightedMatchedTextWithTitle:(id)a0 headTruncation:(BOOL)a1;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;
- (id)buildFootnote;
- (BOOL)buildSecondaryTitleIsDetached;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildButtonItems;
- (id)buildAction;
- (id)buildCompactCardSections;
- (void)buildDefaultPropertiesForCardSection:(id)a0;
- (id)buildTrailingTopText;
- (id)buildTrailingMiddleText;
- (id)buildTrailingBottomText;
- (BOOL)buildPreventThumbnailImageScaling;
- (id)resultAppBundleId;
- (id)buildHorizontallyScrollingCardSection;

@end
