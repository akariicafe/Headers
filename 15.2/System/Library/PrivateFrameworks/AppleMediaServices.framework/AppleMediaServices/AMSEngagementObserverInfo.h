@class NSSet, NSMutableSet;

@interface AMSEngagementObserverInfo : NSObject

@property (retain, nonatomic) NSMutableSet *underlyingPlacements;
@property (retain, nonatomic) NSMutableSet *underlyingServiceTypes;
@property (readonly, nonatomic) NSSet *placements;
@property (readonly, nonatomic) NSSet *serviceTypes;

- (void).cxx_destruct;
- (void)addPlacement:(id)a0;
- (id)init;
- (void)addServiceType:(id)a0;
- (void)removePlacement:(id)a0;
- (void)removeServiceType:(id)a0;

@end
