@class NSSet;

@interface HFAbstractAlarmStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)iconDescription;
- (id)statusDescriptionAllNormal;
- (id)statusDescriptionMultipleTriggered:(unsigned long long)a0;
- (id)statusDescriptionOneTriggered;

@end
