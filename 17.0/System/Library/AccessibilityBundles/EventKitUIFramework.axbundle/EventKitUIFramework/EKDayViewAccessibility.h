@interface EKDayViewAccessibility : __EKDayViewAccessibility_super

@property (readonly, weak, nonatomic) id accessibilityScrollView;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1 orientation:(long long)a2 displayDate:(id)a3 backgroundColor:(id)a4 opaque:(BOOL)a5 scrollbarShowsInside:(BOOL)a6 rightClickDelegate:(id)a7;
- (id)accessibilityCustomRotors;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnotateScroller;

@end
