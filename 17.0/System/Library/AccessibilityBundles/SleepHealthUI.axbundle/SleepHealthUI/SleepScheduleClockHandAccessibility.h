@interface SleepScheduleClockHandAccessibility : __SleepScheduleClockHandAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (id)_axEditCell;
- (BOOL)_axIsValidSleepDurationIncrement:(BOOL)a0 clock:(id)a1 isAdjustingBedtime:(BOOL)a2;
- (id)_axLastSpokenMessage;
- (void)_axSetLastSpokenMessage:(id)a0;
- (void)_axSpeakClockAlertIfNeeded;
- (void)adjustClockHandIncrement:(BOOL)a0;
- (id)decrementComponents:(id)a0;
- (id)incrementComponents:(id)a0;

@end
