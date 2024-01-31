@interface TabOverviewAccessibility : __TabOverviewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_dismissWithItemAtCurrentDecelerationFactor:(id)a0;
- (BOOL)_isClosingLastItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityIsScrollAncestor;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityScrollStatus;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (id)_accessibilityScrollStatusFormatString;
- (struct CGPoint { double x0; double x1; })_accessibilityAdjustedScrollOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityScrollToView:(id)a0;
- (void)_accessibilityThumbnailApplyScrollOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_accessibilityThumbnailOffset;

@end
