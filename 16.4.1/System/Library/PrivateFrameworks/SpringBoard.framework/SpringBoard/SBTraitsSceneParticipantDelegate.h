@class NSString, SBFTraitsParticipant, FBScene, SBFTraitsArbiter, BKSAnimationFenceHandle, SBTraitsSceneOrientationRequestAssistant, SBSceneHandle, NSNumber, UIApplicationSceneClientSettingsDiffInspector;

@interface SBTraitsSceneParticipantDelegate : NSObject <FBSceneObserver, SBSceneHandleObserver, BSInvalidatable, SBFTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater> {
    BOOL _invalidated;
    SBTraitsSceneOrientationRequestAssistant *_orientationRequestActionAssistant;
    UIApplicationSceneClientSettingsDiffInspector *_sceneClientSettingsDiffInspector;
    long long _orientationMode;
    BKSAnimationFenceHandle *_fallbackFence_90210730;
}

@property (nonatomic) BOOL canDetermineActiveOrientation;
@property (retain, nonatomic) NSNumber *preferredSceneLevel;
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationEnabled;
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationAnimatable;
@property (nonatomic) long long orientationModeOverride;
@property (copy, nonatomic) id /* block */ actuateZOrderAlongsideBlock;
@property (copy, nonatomic) id /* block */ actuateOrientationAlongsideBlock;
@property (copy, nonatomic) id /* block */ actuateOrientationSettingsAlongsideBlock;
@property (weak, nonatomic) FBScene *scene;
@property (weak, nonatomic) SBSceneHandle *sceneHandle;
@property (weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (weak, nonatomic) SBFTraitsParticipant *participant;
@property (readonly, nonatomic) long long sceneCurrentOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSceneHandle:(id)a0;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (id)initWithScene:(id)a0;
- (BOOL)_isAllowedToHavePortraitUpsideDown;
- (void)_resetToInitialState;
- (void)updateOrientationSceneSettingsForParticipant:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (unsigned long long)_bestGuessSupportedInterfaceOrientations;
- (void)sceneContentStateDidChange:(id)a0;
- (void)updatePreferencesWithUpdater:(id)a0;
- (unsigned long long)_allLegalOrientations;
- (unsigned long long)_supportedOrientations;
- (id)_application;
- (unsigned long long)_sanitizedMask:(unsigned long long)a0 forApplication:(id)a1;
- (void)_evaluateOrientationTransitionContext:(id)a0;
- (void)dealloc;
- (void)participantWillInvalidate:(id)a0;
- (void)actuateZOrderLevelSettings;
- (long long)_orientationMode;
- (BOOL)needsActuationForUpdateReasons:(long long)a0;
- (id)participantAssociatedSceneIdentityTokens:(id)a0;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)actuateOrientationSettingsWithContext:(id)a0;
- (void)invalidate;
- (long long)_preferredOrientation;
- (void).cxx_destruct;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;

@end
