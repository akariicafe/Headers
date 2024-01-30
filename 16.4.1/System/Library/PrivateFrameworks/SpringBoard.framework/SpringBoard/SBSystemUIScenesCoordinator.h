@class SBLiveTranscriptionUISceneController, SBEnsembleUISceneController, SBOverlayUISceneController, SBAssistiveTouchUISceneController, SBInputUISceneController, NSMutableArray, SBAccessibilityUIServerUISceneController, SBFullKeyboardAccessUISceneController, NSString, SBMomentsUISceneController, SBDruidUISceneController, SBEyedropperUISceneController, SBVoiceControlUISceneController;

@interface SBSystemUIScenesCoordinator : NSObject <SBFSceneWorkspaceControlling> {
    NSMutableArray *_sceneControllers;
}

@property (retain, nonatomic) SBAccessibilityUIServerUISceneController *accessibilityUIServerUISceneController;
@property (retain, nonatomic) SBAssistiveTouchUISceneController *assistiveTouchUISceneController;
@property (retain, nonatomic) SBDruidUISceneController *druidUISceneController;
@property (retain, nonatomic) SBEnsembleUISceneController *ensembleUISceneController;
@property (retain, nonatomic) SBEyedropperUISceneController *eyedropperUISceneController;
@property (retain, nonatomic) SBFullKeyboardAccessUISceneController *fullKeyboardAccessUISceneController;
@property (retain, nonatomic) SBInputUISceneController *inputUISceneController;
@property (retain, nonatomic) SBLiveTranscriptionUISceneController *liveTranscriptionUISceneController;
@property (retain, nonatomic) SBMomentsUISceneController *momentsUISceneController;
@property (retain, nonatomic) SBOverlayUISceneController *overlayUISceneController;
@property (retain, nonatomic) SBVoiceControlUISceneController *voiceControlUISceneController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sceneControllersConfigurations;
+ (id)_allKnownProcessIdentities;
+ (BOOL)isSystemUISceneClientIdentity:(id)a0;
+ (BOOL)isSystemUISceneClientPID:(int)a0;

- (void)windowSceneDidDisconnect:(id)a0;
- (id)sceneFromIdentityToken:(id)a0;
- (BOOL)enumerateScenesWithBlock:(id /* block */)a0;
- (void)windowSceneDidConnect:(id)a0;
- (void)destroyScenesWithPersistentIdentifiers:(id)a0 processIdentity:(id)a1 completion:(id /* block */)a2;
- (id)sceneWorkspaceControllerForProcessIdentity:(id)a0;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (void)createSceneForProcessIdentity:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
