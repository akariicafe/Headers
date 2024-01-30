@class MOPassthroughSubject, NSUUID, MOSubscriber, NSString, NSObject;

@interface MOPassthroughSubjectConduit : NSObject <MOSubscription>

@property (readonly, weak, nonatomic) MOSubscriber *downstream;
@property (readonly, weak, nonatomic) MOPassthroughSubject *parent;
@property (readonly, nonatomic) unsigned long long demand;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSObject *lock;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL hasDemand;
@property (readonly, nonatomic) unsigned long long currentDemand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestDemand:(unsigned long long)a0;
- (void)finishWithCompletion:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void)offerInput:(id)a0;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 parent:(id)a1;

@end
