@class HMHome, HMRoom, NSDate;
@protocol HFCharacteristicValueSource;

@interface HFStatusItem : HFItem <NSCopying>

@property (readonly, nonatomic) NSDate *invalidationDate;
@property (retain, nonatomic) NSDate *invalidationDate;
@property (nonatomic) BOOL needsInvalidation;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) BOOL supportsInvalidation;

+ (id)characteristicTypesForServiceType:(id)a0 includingAssociatedTypes:(BOOL)a1;
+ (id)_serviceTypeToAssociatedServiceTypesMap;
+ (id)_associatedServiceTypeToServiceTypeMap;
+ (id)_criticalServiceTypes;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)filteredServicesOfTypes:(id)a0;
- (void)setNeedsInvalidation:(BOOL)a0;
- (id)initWithHome:(id)a0 room:(id)a1 valueSource:(id)a2;
- (BOOL)supportsInvalidation;
- (id)filteredServicesOfTypes:(id)a0 containingCharacteristicTypes:(id)a1;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (BOOL)isTransitioning;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;
- (id)shortTitleForFormat:(id)a0;
- (id)standardResultsForBatchReadResponse:(id)a0 serviceTypes:(id)a1;
- (id)initWithHome:(id)a0 room:(id)a1;
- (id)displayNameForHomeKitObject:(id)a0;
- (id)filteredServices;
- (BOOL)isInvalidationPending;
- (BOOL)canScheduleInvalidation;
- (void)scheduleInvalidation;
- (id)_filteredServicesOfTypes:(id)a0 containingCharacteristicTypes:(id)a1;
- (double)invalidationTimeout;
- (void)_updateInvalidationDate;

@end
