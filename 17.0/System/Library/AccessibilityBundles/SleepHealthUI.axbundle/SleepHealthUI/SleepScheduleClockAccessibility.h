@interface SleepScheduleClockAccessibility : __SleepScheduleClockAccessibility_super

@property (nonatomic) BOOL accessibilityDraggingBedtimeHand;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)gestureRecognizerDidEnd:(id)a0;
- (void)gestureRecognizerDidMove:(id)a0;
- (void)gestureRecognizerDidStart:(id)a0;
- (id)_axClockComponentsHeader;
- (id)_axClockTimeLabelText;
- (double)_axLastOutputTimeInterval;
- (id)_axLastSpokenMessage;
- (void)_axSetLastOutputTimeInterval:(double)a0;
- (void)_axSetLastSpokenMessage:(id)a0;
- (void)_axSpeakMessageIfNeeded:(id)a0;

@end
