@class NSSet, MOSubscriber, NSUUID, NSString, NSObject;
@protocol MOSubscription;

@interface MOSettingsPublisherConduit : MOSubscriber <MOSubscription>

@property (readonly, weak, nonatomic) MOSubscriber *downstream;
@property (readonly, nonatomic) id<MOSubscription> upstream;
@property (readonly, nonatomic) NSSet *interestedGroups;
@property (readonly, nonatomic) id /* block */ startBlock;
@property (readonly, nonatomic) id /* block */ stopBlock;
@property (readonly, nonatomic) unsigned long long demand;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSObject *lock;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long currentDemand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)receiveInput:(id)a0;
- (void)requestDemand:(unsigned long long)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 interestedGroups:(id)a1 startBlock:(id /* block */)a2 stopBlock:(id /* block */)a3;

@end
