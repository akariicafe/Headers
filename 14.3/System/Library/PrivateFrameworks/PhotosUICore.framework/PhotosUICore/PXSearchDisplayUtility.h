@interface PXSearchDisplayUtility : NSObject

+ (BOOL)attributedStringFontNeedsUpdate:(id)a0 currentFont:(id)a1;
+ (id)wordEmbeddingTextColor;
+ (id)highlightedAttributedStringForString:(id)a0 highlightedSubstring:(id)a1 matchedColor:(id)a2 remainingColor:(id)a3;
+ (id)wordEmbeddingPathColor;
+ (BOOL)layoutDirectionIsRTL;
+ (double)automaticRowHeight;
+ (id)displayStringFromResultCount:(unsigned long long)a0;
+ (id)defaultStringAttributes;
+ (BOOL)shouldUseAccessibilityLayout;

@end
