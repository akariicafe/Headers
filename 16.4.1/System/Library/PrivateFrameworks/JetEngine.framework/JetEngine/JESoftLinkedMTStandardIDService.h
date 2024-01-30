@class MTStandardIDService;

@interface JESoftLinkedMTStandardIDService : NSObject

@property (retain, nonatomic) MTStandardIDService *backing;

- (id)sync;
- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithAMSBag:(id)a0;
- (id)idFieldsForTopic:(id)a0;
- (id)idFieldsForTopic:(id)a0 options:(id)a1;
- (id)mtPromiseToAMSPromise:(id)a0;
- (void)performMaintenanceWithCompletion:(id /* block */)a0;
- (void)queryIDForTopic:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)queryIDForTopic:(id)a0 type:(long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)resetIDForTopics:(id)a0;
- (id)secretValueForNamespace:(id)a0 options:(id)a1;

@end
