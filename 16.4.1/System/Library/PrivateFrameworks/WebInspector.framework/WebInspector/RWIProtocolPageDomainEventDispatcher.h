@interface RWIProtocolPageDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)frameStoppedLoadingWithFrameId:(id)a0;
- (void)frameStartedLoadingWithFrameId:(id)a0;
- (void)defaultUserPreferencesDidChangeWithPreferences:(id)a0;
- (void)domContentEventFiredWithTimestamp:(double)a0;
- (void)frameClearedScheduledNavigationWithFrameId:(id)a0;
- (void)frameDetachedWithFrameId:(id)a0;
- (void)frameNavigatedWithFrame:(id)a0;
- (void)frameScheduledNavigationWithFrameId:(id)a0 delay:(double)a1;
- (void)loadEventFiredWithTimestamp:(double)a0;

@end
