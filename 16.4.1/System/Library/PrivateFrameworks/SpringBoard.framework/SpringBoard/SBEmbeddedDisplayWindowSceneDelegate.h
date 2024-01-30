@class SBTraitsEmbeddedDisplayPipelineManager, SBProductivityGestureController, SBTraitsWindowParticipantDelegate;

@interface SBEmbeddedDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    SBTraitsWindowParticipantDelegate *_traitsWindowParticipantsDelegate;
    SBTraitsEmbeddedDisplayPipelineManager *_traitsEmbeddedPipelineManager;
    SBProductivityGestureController *_productivityGestureController;
}

+ (id)_windowWillBecomeHiddenExemptRoles;
+ (id)_individuallyManagedRoles;

- (void)_configureForConnectingWindowScene:(id)a0 windowSceneContext:(id)a1;
- (id)_pipelineManager;
- (void)initializeProductivityGestureControllerIfNecessary;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (BOOL)_shouldManageParticipantWithRole:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_traitsDelegateForWindowRole:(id)a0;
- (BOOL)_shouldHandleWindowWillBecomeHiddenForRole:(id)a0;

@end
