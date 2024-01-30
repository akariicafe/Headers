@class CKContainer, CKDatabaseImplementation, NSOperationQueue;

@interface CKDatabase : NSObject

@property (readonly, nonatomic) CKDatabaseImplementation *implementation;
@property (readonly, weak, nonatomic) CKContainer *container;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) long long databaseScope;

- (void)addOperation:(id)a0;
- (void)clearRecordCache;
- (id)_initWithImplementation:(id)a0 container:(id)a1;
- (void)saveSubscription:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAllRecordZonesWithCompletionHandler:(id /* block */)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)saveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (void)deleteRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)CKPropertiesDescription;
- (void)deleteRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveRecord:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)deleteSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void)fetchRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 completionHandler:(id /* block */)a2;

@end
