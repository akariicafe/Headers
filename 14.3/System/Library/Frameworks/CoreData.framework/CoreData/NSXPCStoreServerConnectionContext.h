@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (id)managedObjectContext;
- (BOOL)_allowCoreDataFutures;
- (id)initWithConnectionInfo:(id)a0;
- (id)cache;
- (id)persistentStoreCoordinator;
- (id)userInfo;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)entitlements;
- (void)setUserInfo:(id)a0;
- (void)dealloc;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)notificationManager;
- (id)description;
- (void)setManagedObjectContext:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)setNotificationManager:(id)a0;

@end
