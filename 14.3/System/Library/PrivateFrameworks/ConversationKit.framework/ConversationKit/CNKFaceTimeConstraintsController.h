@interface CNKFaceTimeConstraintsController : NSObject {
    void /* unknown type, empty encoding */ participantListState;
    void /* unknown type, empty encoding */ floatingControlsState;
    void /* unknown type, empty encoding */ viewStateEffects;
    void /* unknown type, empty encoding */ viewControllerLayout;
    void /* unknown type, empty encoding */ inCallControlsFramesCache;
}

@property (nonatomic) void /* unknown type, empty encoding */ localParticipantState;
@property (nonatomic) void /* unknown type, empty encoding */ inCallControlsState;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContainingView:(id)a0 controlsViewController:(id)a1 inCallControlsState:(long long)a2 deviceOrientation:(long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inCallControlsViewFrameFor:(id)a0 state:(long long)a1;
- (void)updateFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deviceOrientation:(long long)a1;
- (void)removeEffectsConstraints;
- (void)updateConstraintsWith:(id)a0 controlsViewController:(id)a1 effectsView:(id)a2 effectsBrowserViewController:(id)a3;

@end
