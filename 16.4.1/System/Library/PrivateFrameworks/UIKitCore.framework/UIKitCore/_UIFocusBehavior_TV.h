@class NSString;

@interface _UIFocusBehavior_TV : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (unsigned long long)focusGroupMovementBehavior;
- (BOOL)shouldConvertIndirectTapsIntoArrowKeys;
- (BOOL)supportsTabKey;
- (BOOL)tabBarCanBecomeFocused;
- (BOOL)supportsParentFocusRings;
- (long long)focusCastingMode;
- (unsigned long long)focusGroupContainmentBehavior;
- (BOOL)controlCanBecomeFocused:(id)a0;
- (BOOL)supportsLinearMovementDebugOverlay;
- (long long)pageButtonScrollingStyle;
- (BOOL)tabBarButtonCanBecomeFocused;
- (long long)scrollingMode;
- (long long)requiredInputDevices;
- (long long)indirectMovementPriority;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (BOOL)searchBarTextFieldCanBecomeFocused;
- (BOOL)shouldCallAccessibilityOverrides;
- (BOOL)useDifferentialScrollTrigger;
- (BOOL)refinesIndexBarTargetContentOffset;
- (BOOL)syncsFocusAndResponder;
- (BOOL)showsFocusRingForItem:(id)a0;
- (BOOL)supportsArrowKeys;
- (BOOL)defaultValueForSelectionFollowsFocusInCollectionView:(id)a0;
- (long long)cellFocusability;
- (double)stabilizedLinearFocusMovementTimeout;
- (BOOL)tabBasedMovementLoops;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (BOOL)supportsClipToBounds;
- (BOOL)supportsIndirectPanningMovement;
- (BOOL)wantsFocusSystemForScene:(id)a0;
- (void)dealloc;
- (BOOL)includesContentScrollViewInPreferredFocusEnvironments;
- (BOOL)defaultValueForSelectionFollowsFocusInTableView:(id)a0;
- (BOOL)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (BOOL)honorsFocusSystemEnabledInfoPlistKey;
- (BOOL)wantsTreeLocking;
- (BOOL)textViewCanBecomeFocused:(id)a0;
- (long long)buttonSelectionMode;
- (long long)deliverKeyEventsToFocusEngine;
- (id)init;
- (BOOL)shouldEnableFocusOnSelect;
- (long long)focusRingVisibility;
- (BOOL)supportsIndirectRotaryMovement;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (BOOL)ignoresKeyWindowStatusWhenRestoringFocus;
- (long long)focusDeferral;
- (BOOL)supportsGameControllers;
- (long long)skipKeyCommandsForKeyEvents;
- (BOOL)preventsCellFocusabilityWhileEditing;
- (BOOL)supportViewTransparencyAndMultipleWindows;
- (BOOL)shouldSupressIndirectMovementOnSelect;
- (void)_handleRemoteTouchSurfaceTypeDidChangeNotification:(id)a0;

@end
