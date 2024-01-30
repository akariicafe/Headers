@interface PXSearchDisplayUtility : NSObject

+ (BOOL)shouldUseAccessibilityLayout;
+ (BOOL)attributedStringFontNeedsUpdate:(id)a0 currentFont:(id)a1;
+ (double)automaticRowHeight;
+ (id)defaultStringAttributes;
+ (id)displayStringFromResultCount:(unsigned long long)a0;
+ (id)highlightedAttributedStringForString:(id)a0 highlightedSubstring:(id)a1 matchedColor:(id)a2 remainingColor:(id)a3;
+ (BOOL)layoutDirectionIsRTL;
+ (id)wordEmbeddingPathColor;
+ (id)wordEmbeddingTextColor;

@end
