@interface PXSearchDisplayUtility : NSObject

+ (BOOL)shouldUseAccessibilityLayout;
+ (BOOL)attributedStringFontNeedsUpdate:(id)a0 currentFont:(id)a1;
+ (id)highlightedAttributedStringForString:(id)a0 highlightedSubstring:(id)a1 matchedColor:(id)a2 remainingColor:(id)a3;
+ (id)defaultStringAttributes;
+ (id)wordEmbeddingTextColor;
+ (id)wordEmbeddingPathColor;
+ (BOOL)layoutDirectionIsRTL;
+ (double)automaticRowHeight;
+ (id)displayStringFromResultCount:(unsigned long long)a0;

@end
