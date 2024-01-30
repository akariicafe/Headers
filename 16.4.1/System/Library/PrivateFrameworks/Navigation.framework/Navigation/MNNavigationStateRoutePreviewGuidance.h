@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance

- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)setGuidanceType:(unsigned long long)a0;
- (unsigned long long)type;
- (void)enterState;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;

@end
