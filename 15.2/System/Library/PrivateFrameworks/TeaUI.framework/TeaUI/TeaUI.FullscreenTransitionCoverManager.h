@interface TeaUI.FullscreenTransitionCoverManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ closure;
    void /* unknown type, empty encoding */ coverView;
    void /* unknown type, empty encoding */ transitioning;
    void /* unknown type, empty encoding */ dimmed;
}

- (void)didEndDimming;
- (void)didStartDimming;
- (void)willStartTransition;
- (void)didStartTransition;
- (void)didEndTransition;

@end
