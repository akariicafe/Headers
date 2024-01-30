@protocol HDWorkoutSessionStateController;

@interface _HDHeartRateRecoveryAssertion : HDAssertion

@property (readonly, weak, nonatomic) id<HDWorkoutSessionStateController> sessionStateController;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)a0 sessionStateController:(id)a1;

@end
