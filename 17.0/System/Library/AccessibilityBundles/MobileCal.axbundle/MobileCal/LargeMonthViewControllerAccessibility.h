@interface LargeMonthViewControllerAccessibility : __LargeMonthViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)eventGestureController:(id)a0 commitToPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)eventGestureController:(id)a0 setUpAtPoint:(struct CGPoint { double x0; double x1; })a1 withOccurrence:(id)a2 forceNewEvent:(BOOL)a3;
- (BOOL)_axIsCommittingTimeAdjustment;
- (void)_axSetIsCommittingTimeAdjustment:(BOOL)a0;
- (id)_axTopWeekViewWithTopPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateDraggingOffsetTimesForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showDate:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
