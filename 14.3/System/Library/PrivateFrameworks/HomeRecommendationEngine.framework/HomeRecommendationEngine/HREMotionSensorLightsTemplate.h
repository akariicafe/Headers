@interface HREMotionSensorLightsTemplate : HRECharacteristicTriggerTemplate

- (id)initWithConfiguration:(id)a0;
- (id)titleFormat;
- (id)actionOnlyContextKey;
- (id)eventOnlyContextKey;
- (id)verboseContextKey;
- (id)actionKeyForServiceType:(id)a0 forRecommendation:(id)a1;
- (BOOL)usesRoomNameGrouping;
- (id)iconDescriptorForHomeObjects:(id)a0 forRecommendation:(id)a1;
- (BOOL)recommendationIsForOccupancySensor:(id)a0;

@end
