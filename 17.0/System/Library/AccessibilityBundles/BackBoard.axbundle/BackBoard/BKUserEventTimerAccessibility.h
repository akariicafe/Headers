@interface BKUserEventTimerAccessibility : __BKUserEventTimerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (int)_axDesiredMode;
- (double)_axDesiredTimeout;
- (BOOL)_axIsTimerDisabled;
- (void)_axSetDesiredMode:(int)a0;
- (void)_axSetDesiredTimeout:(double)a0;
- (void)_axSetTimerDisabled:(BOOL)a0;
- (void)resetTimer:(double)a0 mode:(int)a1;

@end
