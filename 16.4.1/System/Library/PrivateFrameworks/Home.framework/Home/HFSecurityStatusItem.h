@class NSSet;

@interface HFSecurityStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

+ (BOOL)_currentState:(long long)a0 matchesTargetState:(long long)a1;
+ (id)_legacy_shortDescriptionForSecuritySystemState:(long long)a0;
+ (id)_shortDescriptionForSecuritySystemState:(long long)a0;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;

@end
