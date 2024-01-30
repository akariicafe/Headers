@class CKContainer, CKDatabaseImplementation, NSOperationQueue;

@interface CKDatabase : NSObject

@property (readonly, nonatomic) CKDatabaseImplementation *implementation;
@property (weak, nonatomic) CKContainer *container;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) long long databaseScope;

- (void)saveRecord:(id)a0 completionHandler:(id /* block */)a1;
- (id)CKPropertiesDescription;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (void)fetchRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAllRecordZonesWithCompletionHandler:(id /* block */)a0;
- (void)fetchRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveSubscription:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)a0;
- (void)saveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)clearRecordCache;
- (id)_initWithImplementation:(id)a0 container:(id)a1;
- (void)addOperation:(id)a0;

@end
