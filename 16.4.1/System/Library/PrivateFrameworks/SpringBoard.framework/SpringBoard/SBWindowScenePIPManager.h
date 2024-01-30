@class SBPIPControllerCoordinator, NSMutableDictionary, NSString, NSMapTable, SBFZStackParticipant, SBWindowScene, _SBPIPEndStashTabSuppressionGestureManager;

@interface SBWindowScenePIPManager : NSObject <SBFZStackParticipantDelegate> {
    BOOL _assumingKeyboardIsVisible;
    NSMutableDictionary *_contentTypeToStashedPadding;
    NSMutableDictionary *_contentTypeToWindowMargins;
    NSMutableDictionary *_contentTypeToWindowLevelOverrideAssertions;
    NSMapTable *_stashAssertionsToCompoundAssertionMap;
    SBFZStackParticipant *_zStackParticipant;
    _SBPIPEndStashTabSuppressionGestureManager *_endStashTabSuppressionGestureManager;
}

@property (copy, nonatomic, getter=_sourceToEdgeInsets) NSMutableDictionary *sourceToEdgeInsets;
@property (readonly, nonatomic, getter=_minimumStashedPadding) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } minimumStashedPadding;
@property (readonly, nonatomic) SBPIPControllerCoordinator *globalCoordinator;
@property (readonly, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowSceneDidDisconnect:(id)a0;
- (void)_updateFloatingDockInsetsWithoutNotifyingControllers;
- (void)_keyboardWillRotate:(id)a0;
- (void)windowSceneDidConnect:(id)a0;
- (void)addStashTabSuppressionTarget:(id)a0 action:(SEL)a1;
- (void)removeStashTabSuppressionTarget:(id)a0 action:(SEL)a1;
- (void)_systemApertureInsetsDidChange:(id)a0;
- (void)_windowManagementStyleDidChange:(id)a0;
- (void)updatePictureInPictureWindowLevels;
- (void)_keyboardWillShowOrHide:(id)a0;
- (void)_floatingDockHeightWillChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (void)applyPictureInPictureInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forSource:(long long)a1;
- (BOOL)isPointWithinAnyPictureInPictureContent:(struct CGPoint { double x0; double x1; })a0;
- (void)_shelfHeightDidChange:(id)a0;
- (id)acquireStashAssertionForReason:(long long)a0 identifier:(id)a1;
- (id)_windowLevelOverrideAssertionsForContentType:(long long)a0;
- (id)acquireWindowLevelOverrideAssertionForControllerWithContentType:(long long)a0 toWindowLevel:(unsigned long long)a1 withReason:(long long)a2 identifier:(id)a3;
- (void)configureInsetsForIconController:(id)a0;
- (void)applyStashedPictureInPicturePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forPIPSource:(long long)a1;
- (void)_keyboardWillChangeFrame:(id)a0;
- (void)setNeedsUpdateZStackParticipantPreferencesWithReason:(id)a0;
- (id)initWithGlobalCoordinator:(id)a0;
- (BOOL)isZStackForegroundActive;
- (void).cxx_destruct;

@end
