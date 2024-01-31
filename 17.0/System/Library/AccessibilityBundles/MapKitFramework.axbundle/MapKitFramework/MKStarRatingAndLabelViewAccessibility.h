@interface MKStarRatingAndLabelViewAccessibility : __MKStarRatingAndLabelViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (id)ratingAndReviewsAsAttributedString:(double)a0 style:(long long)a1 font:(id)a2 numberOfReviews:(unsigned long long)a3 textColor:(id)a4 theme:(id)a5;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 showReviewsOrTips:(BOOL)a3 showNumberOfReviews:(BOOL)a4 ratingStyle:(long long)a5 theme:(id)a6;

- (BOOL)isAccessibilityElement;

@end
