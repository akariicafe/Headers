@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (void)setNotificationManager:(id)a0;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)managedObjectContext;
- (void)setManagedObjectContext:(id)a0;
- (BOOL)_allowCoreDataFutures;
- (id)notificationManager;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)cache;
- (id)userInfo;
- (struct { unsigned int x0[8]; })auditToken;
- (id)description;
- (id)initWithConnectionInfo:(id)a0;
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (void)dealloc;
- (void)setUserInfo:(id)a0;

@end
