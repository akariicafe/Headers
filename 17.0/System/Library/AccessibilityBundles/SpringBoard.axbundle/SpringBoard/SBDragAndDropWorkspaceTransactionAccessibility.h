@interface SBDragAndDropWorkspaceTransactionAccessibility : __SBDragAndDropWorkspaceTransactionAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_didComplete;
- (void)_updateCurrentDropActionForSession:(id)a0;
- (void)_accessibilityUpdateDropActionForAction:(long long)a0;
- (void)_accessibilityUpdateDropActionForRegion:(unsigned long long)a0;
- (long long)accessibilityCurrentDropAction;
- (unsigned long long)accessibilityCurrentDropRegion;
- (id)accessibilityCurrentDropRegionContext;
- (id)accessibilityIntersectingDisplayName;

@end
