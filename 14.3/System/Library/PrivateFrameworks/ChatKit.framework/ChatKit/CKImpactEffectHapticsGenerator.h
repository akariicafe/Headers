@class NSObject;
@protocol CK_UIFeedBackImpactBehavior;

@interface CKImpactEffectHapticsGenerator : NSObject

@property (retain, nonatomic) NSObject<CK_UIFeedBackImpactBehavior> *expressiveSendFeedbackImpactBehavior;
@property (nonatomic) double feedbackImpactBehaviorDispatchDelay;
@property (nonatomic) BOOL sendFeedbackImpactBehavior;

- (id)init;
- (void).cxx_destruct;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)a0 cleanUpOnSend:(BOOL)a1;
- (void)_setUpExpressiveSendFeedbackImpactBehaviorForCoordinateSpace:(id)a0;
- (void)cleanUpImpactBehaviorFeedback;
- (void)setImpactBehaviorFeedbackDispatchTimeForSendWithImpactMessage:(id)a0;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)a0;

@end
