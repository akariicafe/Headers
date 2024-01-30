@class NSString, NSXPCConnection;

@interface AFManagedStorageConnection : NSObject <AFManagedStore> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_clearConnection;
- (id)_connection;
- (void).cxx_destruct;
- (id)_managedStoreService;
- (id)_managedStoreServiceWithErrorHandler:(id /* block */)a0;
- (id)_synchronousManagedStoreServiceWithErrorHandler:(id /* block */)a0;
- (id)dataForKey:(id)a0 inKnowledgeStoreWithName:(id)a1;
- (id)domainObjectForKey:(id)a0;
- (void)resetKnowledgeStoreWithName:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1 inKnowledgeStoreWithName:(id)a2;
- (void)setDomainObject:(id)a0 forKey:(id)a1;

@end
