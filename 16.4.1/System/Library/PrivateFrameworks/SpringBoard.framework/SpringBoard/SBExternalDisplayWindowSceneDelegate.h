@class SBWindowSceneStatusBarSettingsAssertion, SBTraitsExternalDisplayPipelineManager, SBTraitsWindowParticipantDelegate, SBExternalDisplayWallpaperController, FBApplicationUpdateScenesTransaction, SBExternalDisplayCoverSheetController;

@interface SBExternalDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    FBApplicationUpdateScenesTransaction *_transaction;
    SBTraitsWindowParticipantDelegate *_traitsWindowParticipantsDelegate;
    SBTraitsExternalDisplayPipelineManager *_traitsExternalPipelineManager;
    SBExternalDisplayWallpaperController *_wallpaperController;
    SBExternalDisplayCoverSheetController *_coverSheetController;
    SBWindowSceneStatusBarSettingsAssertion *_showStatusBarAssertion;
}

+ (id)_individuallyManagedRoles;

- (void)_configureForConnectingWindowScene:(id)a0 windowSceneContext:(id)a1;
- (id)_pipelineManager;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (BOOL)_shouldManageParticipantWithRole:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sceneDidDisconnect:(id)a0;
- (id)_traitsDelegateForWindowRole:(id)a0;

@end
