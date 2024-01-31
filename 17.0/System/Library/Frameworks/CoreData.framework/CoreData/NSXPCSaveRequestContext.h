@class NSManagedObjectContext, NSXPCStore, NSDictionary, NSMutableDictionary, NSSaveChangesRequest;

@interface NSXPCSaveRequestContext : NSObject {
    NSXPCStore *_store;
    NSSaveChangesRequest *_request;
    NSDictionary *_metadata;
    NSManagedObjectContext *_context;
    NSMutableDictionary *_changeCache;
    unsigned long long _interrupts;
    BOOL _forceUpdates;
}

- (id)managedObjectContext;
- (void)dealloc;
- (id)initForStore:(id)a0 request:(id)a1 metadata:(id)a2 forceInsertsToUpdates:(BOOL)a3 context:(id)a4;

@end
