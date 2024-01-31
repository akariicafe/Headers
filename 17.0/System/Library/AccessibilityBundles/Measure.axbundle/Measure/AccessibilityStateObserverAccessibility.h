@interface AccessibilityStateObserverAccessibility : __AccessibilityStateObserverAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)didUpdate;
- (id)_axLastSnapDivisionsDescription;
- (BOOL)_axHasRectangleWithState:(long long)a0;
- (id)_axLastSnapDivisionsLineID;
- (long long)_axLastWorldPointType;
- (BOOL)_axNeedsAnnouncementForContinueMeasurement;
- (void)_axSetLastSnapDivisionsDescription:(id)a0;
- (void)_axSetLastSnapDivisionsLineID:(id)a0;
- (void)_axSetLastWorldPointType:(long long)a0;
- (void)_axSetNeedsAnnouncementForContinueMeasurement:(BOOL)a0;
- (void)_axUpdateForState;
- (id)axDescriptionForNumberOfPointsAndLines;
- (BOOL)axHasConfirmedRectangle;
- (BOOL)axHasSuggestedRectangle;
- (BOOL)axIsModeForMeasuring;
- (id)axOrderedWorldLineIDs;
- (id)axWorldLines;
- (id)axWorldRectangles;

@end
