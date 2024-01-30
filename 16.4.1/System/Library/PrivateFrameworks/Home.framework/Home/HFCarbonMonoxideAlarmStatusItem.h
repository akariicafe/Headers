@interface HFCarbonMonoxideAlarmStatusItem : HFAbstractAlarmStatusItem

+ (id)serviceTypes;

- (id)iconDescription;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;
- (id)statusDescriptionAllNormal;
- (id)statusDescriptionMultipleTriggered:(unsigned long long)a0;
- (id)statusDescriptionOneTriggered;

@end
