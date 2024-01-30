@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)managedObjectContext;
- (BOOL)_allowCoreDataFutures;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)setManagedObjectContext:(id)a0;
- (void)setNotificationManager:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)notificationManager;
- (id)entitlements;
- (id)initWithConnectionInfo:(id)a0;
- (id)cache;
- (void)setUserInfo:(id)a0;
- (void)dealloc;
- (id)userInfo;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)description;
- (id)persistentStoreCoordinator;

@end
