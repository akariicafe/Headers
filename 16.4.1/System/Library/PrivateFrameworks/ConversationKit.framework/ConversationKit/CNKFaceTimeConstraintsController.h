@interface CNKFaceTimeConstraintsController : NSObject {
    void /* unknown type, empty encoding */ shutterButtonState;
    void /* unknown type, empty encoding */ captionsState;
    void /* unknown type, empty encoding */ participantListState;
    void /* unknown type, empty encoding */ shouldForceAllowNextLocalParticipantStateUpdate;
    void /* unknown type, empty encoding */ mostRecentLocalParticipantCorner;
    void /* unknown type, empty encoding */ localParticipantState;
    void /* unknown type, empty encoding */ localParticipantAspectRatio;
    void /* unknown type, empty encoding */ inCallConversationBannerState;
    void /* unknown type, empty encoding */ participantGridState;
    void /* unknown type, empty encoding */ floatingControlsState;
    void /* unknown type, empty encoding */ viewStateEffects;
    void /* unknown type, empty encoding */ viewControllerLayout;
    void /* unknown type, empty encoding */ bannerControlsWidthConstraint;
    void /* unknown type, empty encoding */ bannerControlsHeightConstraint;
    void /* unknown type, empty encoding */ configurableRosterCellWidthConstraint;
    void /* unknown type, empty encoding */ bannerDodgingLayoutGuide;
    void /* unknown type, empty encoding */ bannerControlsSize;
    void /* unknown type, empty encoding */ configurableRosterCellWidth;
    void /* unknown type, empty encoding */ inCallControlsFramesCache;
}

@property (nonatomic) long long accessibilityLocalParticipantState;
@property (nonatomic) void /* unknown type, empty encoding */ inCallControlsState;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inCallControlsViewFrameFor:(id)a0 state:(long long)a1;
- (id)initWithContainingView:(id)a0 controlsViewController:(id)a1 inCallControlsState:(long long)a2 localParticipantView:(id)a3 deviceOrientation:(long long)a4;
- (long long)localParticipantState;
- (void)removeEffectsConstraints;
- (void)setLocalParticipantState:(long long)a0;
- (void)updateConstraintsWith:(id)a0 controlsViewController:(id)a1 localParticipantView:(id)a2 effectsView:(id)a3 effectsBrowserViewController:(id)a4;
- (void)updateFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deviceOrientation:(long long)a1;

@end
