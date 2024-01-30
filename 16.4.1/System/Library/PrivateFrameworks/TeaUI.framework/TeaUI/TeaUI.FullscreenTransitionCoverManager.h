@interface TeaUI.FullscreenTransitionCoverManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ closure;
    void /* unknown type, empty encoding */ coverView;
    void /* unknown type, empty encoding */ transitioning;
    void /* unknown type, empty encoding */ dimmed;
}

- (void)didEndTransition;
- (void)didStartDimming;
- (void)didStartTransition;
- (void)didEndDimming;
- (void)willStartTransition;

@end
