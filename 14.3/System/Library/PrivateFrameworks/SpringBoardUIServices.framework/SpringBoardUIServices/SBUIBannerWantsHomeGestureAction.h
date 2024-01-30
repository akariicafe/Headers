@interface SBUIBannerWantsHomeGestureAction : BSAction

@property (readonly, nonatomic) BOOL wantsHomeGesture;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)setSuccessful:(BOOL)a0;
- (id)initWithWantsHomeGesture:(BOOL)a0 handler:(id /* block */)a1;

@end
