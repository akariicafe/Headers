@interface HREAutoLightsOnUnlockTemplate : HRECharacteristicTriggerTemplate

+ (id)eventServiceTypeToActionKeyMap;

- (id)initWithConfiguration:(id)a0;
- (id)titleFormat;
- (id)actionOnlyContextKey;
- (id)eventOnlyContextKey;
- (id)verboseContextKey;
- (id)actionKeyForServiceType:(id)a0 forRecommendation:(id)a1;
- (BOOL)usesRoomNameGrouping;
- (id)iconDescriptorForHomeObjects:(id)a0 forRecommendation:(id)a1;

@end
