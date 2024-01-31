@interface EKDayGridViewAccessibility : __EKDayGridViewAccessibility_super

@property (nonatomic) BOOL accessibilityIsPreviewGridView;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityHideEmptyHours;
- (void)_accessibilityOccurrencesChanged:(id)a0;
- (void)_axResetChildren;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1 opaque:(BOOL)a2 numberOfDaysToDisplay:(unsigned long long)a3;

@end
