@interface SBIconListViewDraggingAppPolicyHandlerAccessibility : __SBIconListViewDraggingAppPolicyHandlerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)_updateDragPauseForDropSession:(id)a0;
- (void)_dragPauseTimerFired:(id)a0;
- (void)handleSpringLoadOnIconView:(id)a0;
- (id)_accessibilityFindIconIntersectingDraggedIconForDropSession:(id)a0;
- (void)_accessibilityIconMovedToPosition;
- (Class)_accessibilityIconViewclass;
- (id)_axCurrentIconListView;

@end
