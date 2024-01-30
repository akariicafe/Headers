@class UIWindow, NSString, SBFTraitsArbiter, SBDefaultTraitsParticipantDelegate, SBTraitsArbitrationPipelineManager;

@interface SBWindowSceneDelegate : NSObject <SBFTraitsArbiterScreenStateProviding, UISceneDelegate, UIWindowSceneDelegate_ForSpringBoardOnly> {
    SBDefaultTraitsParticipantDelegate *_defaultParticipantDelegate;
    SBTraitsArbitrationPipelineManager *_arbitrationPipelineManager;
    SBFTraitsArbiter *_traitsArbiter;
}

@property (readonly, nonatomic) BOOL screenIsDim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

+ (id)_windowWillBecomeHiddenExemptRoles;
+ (id)_individuallyManagedRoles;

- (void)_windowScene:(id)a0 windowDidBecomeVisible:(id)a1;
- (void)_windowScene:(id)a0 windowWillBecomeHidden:(id)a1;
- (id)_participantForWindow:(id)a0;
- (void)_setParticipant:(id)a0 forWindow:(id)a1;
- (BOOL)_isWindowContentVisible:(id)a0;
- (void)_windowScene:(id)a0 windowWillDetach:(id)a1;
- (id)_acquireParticipantForWindow:(id)a0 reason:(id)a1;
- (id)traitsArbiter;
- (void).cxx_destruct;
- (BOOL)_shouldManageParticipantWithRole:(id)a0;
- (id)init;
- (void)_windowScene:(id)a0 window:(id)a1 didUpdateSupportedInterfaceOrientations:(unsigned long long)a2;
- (BOOL)_shouldNotifyWindowWillBecomeHiddenForRole:(id)a0;
- (void)_windowScene:(id)a0 windowWillBecomeVisible:(id)a1;
- (void)_windowScene:(id)a0 windowWillAttach:(id)a1;
- (double)_windowScene:(id)a0 levelForWindow:(id)a1 preferredLevel:(double)a2;
- (id)traitsArbitrationPipelineManager;

@end
