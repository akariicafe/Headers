@class NSManagedObjectContext, NSXPCStoreConnectionInfo, NSPersistentStore;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
    NSPersistentStore *_activeStore;
}

- (id)managedObjectContext;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)setManagedObjectContext:(id)a0;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)cache;
- (void)dealloc;
- (id)userInfo;
- (void)setNotificationManager:(id)a0;
- (id)notificationManager;
- (id)entitlements;
- (id)persistentStoreCoordinator;
- (BOOL)_allowCoreDataFutures;
- (struct { unsigned int x0[8]; })auditToken;
- (id)description;
- (void)setUserInfo:(id)a0;
- (id)initWithConnectionInfo:(id)a0;

@end
