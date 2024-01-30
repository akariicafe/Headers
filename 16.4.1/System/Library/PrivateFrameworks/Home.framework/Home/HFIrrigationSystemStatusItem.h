@class NSSet;

@interface HFIrrigationSystemStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

- (id)_subclass_updateWithOptions:(id)a0;

@end
