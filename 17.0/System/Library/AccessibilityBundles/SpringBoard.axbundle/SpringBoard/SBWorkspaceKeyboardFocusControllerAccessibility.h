@class NSString;

@interface SBWorkspaceKeyboardFocusControllerAccessibility : __SBWorkspaceKeyboardFocusControllerAccessibility_super

@property (retain, nonatomic, setter=_axSetFocusedSpringBoardScene:) NSString *_axFocusedSpringBoardScene;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_updateAccessibilityDeferringRulesUnderstandingSpringBoardIsForeground:(BOOL)a0;
- (void)_accessibilityFocusOnSpringBoard;
- (BOOL)_accessibilityIsFocusLockedToSpringBoard;
- (int)_accessibilityPrimaryKeyboardFocusOverridePid;
- (int)_accessibilitySecondaryKeyboardFocusOverridePid;
- (void)_accessibilitySetPrimaryKeyboardFocusOverridePid:(int)a0 sceneID:(id)a1;
- (void)_accessibilitySetSecondaryKeyboardFocusOverridePid:(int)a0 sceneID:(id)a1;
- (id)_accessibilityTokenStringForPid:(int)a0 sceneID:(id)a1;
- (void)_accessibilityUserFocusRequestForScene:(id)a0;
- (void)_axClearKeyboardFocusOverrideDeferral;
- (void)_axDeferKeyboardFocusToPid:(int)a0 sceneID:(id)a1 forPrimaryOverride:(BOOL)a2;
- (BOOL)_axIsAcquiringSpringBoardDeferral;
- (BOOL)_axIsInvalidatingSpringBoardDeferral;
- (id)_axNativeFocusedApplicationDeathWatcher;
- (id)_axNativeFocusedApplicationDeferral;
- (int)_axPrimaryKeyboardFocusOverridePid;
- (id)_axPrimaryKeyboardFocusOverrideSceneID;
- (int)_axSecondaryKeyboardFocusOverridePid;
- (id)_axSecondaryKeyboardFocusOverrideSceneID;
- (void)_axSetIsAcquiringSpringBoardDeferral:(BOOL)a0;
- (void)_axSetIsInvalidatingSpringBoardDeferral:(BOOL)a0;
- (void)_axSetKeyboardFocusPid:(int)a0 sceneID:(id)a1 forPrimaryOverride:(BOOL)a2;
- (void)_axSetNativeFocusedApplicationDeathWatcher:(id)a0;
- (void)_axSetNativeFocusedApplicationDeferral:(id)a0;
- (void)_axSetPrimaryKeyboardFocusOverridePid:(int)a0;
- (void)_axSetPrimaryKeyboardFocusOverrideSceneID:(id)a0;
- (void)_axSetSecondaryKeyboardFocusOverridePid:(int)a0;
- (void)_axSetSecondaryKeyboardFocusOverrideSceneID:(id)a0;
- (void)_axSetSpringBoardDeferral:(id)a0;
- (id)_axSpringBoardDeferral;

@end
