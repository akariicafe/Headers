@class UIColor, NSString, FCHeadlineTemplate, NFLCellGeneratorManager, NFLFontCache, UITraitCollection;
@protocol FCFeedTheming, NFLFeedLayoutSearchConfiguration;

@interface NFLFeedSettings : NSObject <NSCopying>

@property (retain, nonatomic) id<FCFeedTheming> feedTheme;
@property (copy, nonatomic) id<NFLFeedLayoutSearchConfiguration> defaultFeedLayoutSearchConfiguration;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (readonly, nonatomic) double feedWidth;
@property (readonly, nonatomic) double feedGutter;
@property (readonly, nonatomic) double feedTopMargin;
@property (readonly, nonatomic) double adjustedFeedWidth;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, copy, nonatomic) UIColor *feedBackgroundColor;
@property (readonly, nonatomic) long long columnCount;
@property (readonly, nonatomic) unsigned long long layoutOptions;
@property (readonly, nonatomic) double columnWidth;
@property (readonly, nonatomic) double horizontalMarginWidth;
@property (readonly, nonatomic) double rowHeight;
@property (readonly, nonatomic) double verticalMarginInRows;
@property (readonly, nonatomic) double articleContentInset;
@property (readonly, nonatomic) double articleSelectionCornerRadius;
@property (readonly, nonatomic) double articleSelectionInset;
@property (readonly, nonatomic) double scaleValue;
@property (readonly, nonatomic) NFLCellGeneratorManager *cellGeneratorManager;
@property (readonly, nonatomic) NFLFontCache *fontCache;
@property (nonatomic) BOOL allowsExcerptsInAllCells;
@property (readonly, nonatomic) BOOL authenticationSetup;
@property (readonly, nonatomic) BOOL showingPrefetchedPurchase;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 viewportWidth:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)preservesTraitCollection:(id)a0;
- (double)cellHeightForRowSpan:(long long)a0;
- (id)description;
- (id)initWithViewportSize:(struct CGSize { double x0; double x1; })a0 defaultFeedLayoutSearchConfiguration:(id)a1 columnCount:(long long)a2 feedGutter:(double)a3 feedTopMargin:(double)a4 verticalMarginInRows:(double)a5 preferredContentSizeCategory:(id)a6 maximumContentInset:(double)a7 selectionCornerRadius:(double)a8 selectionInset:(double)a9 showAccessoryText:(BOOL)a10 layoutOptions:(unsigned long long)a11;
- (id)initWithViewportSize:(struct CGSize { double x0; double x1; })a0 viewportInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 preferredContentSizeCategory:(id)a2 showAccessoryText:(BOOL)a3 layoutType:(long long)a4 layoutOptions:(unsigned long long)a5;
- (double)cellWidthForColumnSpan:(long long)a0;
- (id)initWithViewportSize:(struct CGSize { double x0; double x1; })a0 viewportInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 preferredContentSizeCategory:(id)a2 showAccessoryText:(BOOL)a3 traitCollection:(id)a4;
- (BOOL)preservesLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
