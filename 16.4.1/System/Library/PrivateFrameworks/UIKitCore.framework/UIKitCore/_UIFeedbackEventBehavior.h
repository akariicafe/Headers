@interface _UIFeedbackEventBehavior : UINotificationFeedbackGenerator

+ (void)eventOccurred:(long long)a0;
+ (id)eventBehaviorWithCoordinateSpace:(id)a0 configuration:(id)a1;
+ (void)_privateEventOccurred:(long long)a0;

- (void)eventOccurred:(long long)a0;
- (void)_activateAndPlayEvent:(long long)a0;
- (void)_privateEventOccurred:(long long)a0;

@end
