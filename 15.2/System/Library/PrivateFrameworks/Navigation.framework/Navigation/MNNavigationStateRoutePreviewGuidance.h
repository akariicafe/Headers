@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance

- (void)enterState;
- (void)setGuidanceType:(unsigned long long)a0;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (unsigned long long)type;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;

@end
