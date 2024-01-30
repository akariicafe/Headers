@class NSString;

@interface _UIFocusBehavior_TV : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)supportsLinearMovementDebugOverlay;
- (BOOL)supportsArrowKeys;
- (BOOL)defaultValueForSelectionFollowsFocusInTableView:(id)a0;
- (BOOL)honorsFocusSystemEnabledInfoPlistKey;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (BOOL)tabBarButtonCanBecomeFocused;
- (BOOL)controlCanBecomeFocused:(id)a0;
- (long long)focusRingVisibility;
- (BOOL)syncsFocusAndResponder;
- (BOOL)wantsTreeLocking;
- (BOOL)supportsGameControllers;
- (BOOL)wantsFocusSystemForScene:(id)a0;
- (BOOL)supportsParentFocusRings;
- (BOOL)treatFocusableItemAsLeaf;
- (long long)requiredInputDevices;
- (BOOL)supportsFocusGroups;
- (long long)buttonSelectionMode;
- (long long)deliverKeyEventsToFocusEngine;
- (long long)indirectMovementPriority;
- (BOOL)shouldEnableFocusOnSelect;
- (BOOL)supportViewTransparencyAndMultipleWindows;
- (BOOL)supportsClipToBounds;
- (BOOL)defaultValueForSelectionFollowsFocusInCollectionView:(id)a0;
- (BOOL)shouldConvertIndirectTapsIntoArrowKeys;
- (id)init;
- (long long)cellFocusability;
- (BOOL)supportsTabKey;
- (BOOL)ignoresKeyWindowStatusWhenRestoringFocus;
- (long long)focusCastingMode;
- (BOOL)textViewCanBecomeFocused:(id)a0;
- (BOOL)shouldSupressIndirectMovementOnSelect;
- (BOOL)searchBarTextFieldCanBecomeFocused;
- (BOOL)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (BOOL)tabBarCanBecomeFocused;
- (BOOL)tabBasedMovementLoops;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (BOOL)includesContentScrollViewInPreferredFocusEnvironments;
- (void)dealloc;
- (long long)focusDeferral;
- (long long)skipKeyCommandsForKeyEvents;
- (BOOL)showsFocusRingForItem:(id)a0;
- (BOOL)supportsIndirectPanningMovement;
- (BOOL)preventsCellFocusabilityWhileEditing;

@end
