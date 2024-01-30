@class UIFont, NSString, WFFloatingViewConfiguration, UITraitCollection;

@interface WFLibraryLayoutMetrics : NSObject <WFChicletViewMetrics, NSCopying>

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) double lineSpacing;
@property (readonly, nonatomic) struct CGSize { double width; double height; } workflowSize;
@property (readonly, nonatomic) double workflowIconToLabelMargin;
@property (readonly, nonatomic) double workflowGlyphDimension;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } workflowPlusGlyphSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } workflowContentEdgeInsets;
@property (readonly, nonatomic) UIFont *workflowTitleFont;
@property (readonly, nonatomic) UIFont *workflowSubtitleFont;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) unsigned long long appIconFormat;
@property (readonly, nonatomic) WFFloatingViewConfiguration *floatingViewConfiguration;
@property (readonly, nonatomic) unsigned long long itemsPerBanner;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } workflowGlyphSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricsCompatibleWithTraitCollection:(id)a0 viewWidth:(double)a1 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (id)workflowTitleFontInDefaultSize;
+ (id)workflowSubtitleFontCompatibleWithTraitCollection:(id)a0;
+ (id)workflowTitleFontCompatibleWithTraitCollection:(id)a0;
+ (id)metricsCompatibleWithTraitCollection:(id)a0 viewWidth:(double)a1 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 needsTopPadding:(BOOL)a3;

- (void).cxx_destruct;
- (double)scaledValueForValue:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTraitCollection:(id)a0 viewWidth:(double)a1 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 needsTopPadding:(BOOL)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })scaledEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 min:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 max:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
