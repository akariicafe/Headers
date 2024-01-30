@interface MNNavigationStateNoDestination : MNNavigationState

- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)type;

@end
