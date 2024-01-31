@interface TiltedTabViewControllerAccessibility : __TiltedTabViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dismiss;
- (void)_accessibilityUpdateDraftLabelForBorrowedView:(id)a0 withActorAtIndex:(long long)a1;
- (void)_axPrepareDockedLabelForIndex:(long long)a0;
- (id)tiltedTabView:(id)a0 contentViewForItemAtIndex:(unsigned long long)a1;
- (id)tiltedTabView:(id)a0 snapshotViewForItemAtIndex:(unsigned long long)a1;
- (void)tiltedTabViewDidDismiss:(id)a0;
- (void)tiltedTabViewDidPresent:(id)a0;

@end
