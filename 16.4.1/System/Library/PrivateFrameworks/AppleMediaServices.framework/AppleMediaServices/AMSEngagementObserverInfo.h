@class NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AMSEngagementObserverInfo : NSObject

@property (retain, nonatomic) NSMutableSet *underlyingPlacements;
@property (retain, nonatomic) NSMutableSet *underlyingServiceTypes;
@property (readonly, nonatomic) NSSet *placements;
@property (readonly, nonatomic) NSSet *serviceTypes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)addServiceType:(id)a0;
- (void)removeServiceType:(id)a0;
- (void)addPlacement:(id)a0;
- (void).cxx_destruct;
- (void)removePlacement:(id)a0;
- (id)initWithQueue:(id)a0;

@end
