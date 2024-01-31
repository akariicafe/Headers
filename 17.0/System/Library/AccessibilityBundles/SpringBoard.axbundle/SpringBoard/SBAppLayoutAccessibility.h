@interface SBAppLayoutAccessibility : __SBAppLayoutAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)initWithItems:(id)a0 centerItem:(id)a1 floatingItem:(id)a2 configuration:(long long)a3 itemsToLayoutAttributes:(id)a4 centerConfiguration:(long long)a5 environment:(long long)a6 hidden:(BOOL)a7 preferredDisplayOrdinal:(long long)a8;
- (id)_axGetFirstCall;
- (id)_axDisplayItems;
- (id)_axAllHandlesInCall:(id)a0;
- (long long)_axAppLayoutType;
- (id)_axBundleIdentifier;
- (id)_axContactForHandle:(id)a0;
- (id)_axDisplayName;
- (long long)_axDisplaySizingPolicy;
- (id)_axGetFirstDestination;
- (id)_axGetFirstDestinationHandleValue;
- (id)_axGetHandlesAndLoadFirstDestinationInCall:(id)a0;
- (id)_axLabelForInCallService;
- (id)_axLabelWithFirstIconTitle:(id)a0 secondIconTitle:(id)a1;
- (void)_axLoadFirstDestinationIfNecessary;
- (id)_axPredicateForHandle:(id)a0;
- (void)_axSetFirstDestination:(id)a0;
- (void)_axSetFirstDestinationHandleValue:(id)a0;

@end
