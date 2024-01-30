@class NSMapTable, NSMutableDictionary, NSMutableSet, HDDaemon;

@interface HDTaskServerRegistry : NSObject {
    NSMutableDictionary *_taskServerClassesByTaskIdentifier;
    NSMapTable *_taskServersByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    NSMutableSet *_loadedPluginURLs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (id)initWithDaemon:(id)a0;
- (void)didCreateTaskServer:(id)a0;
- (void)taskServerDidInvalidate:(id)a0;
- (Class)_taskServerClassForIdentifier:(id)a0;
- (BOOL)loadTaskServersFromPluginAtURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)registerTaskServerClasses:(id)a0 error:(id *)a1;
- (void)removeObserver:(id)a0 forTaskServerUUID:(id)a1;
- (void)removeTaskServerObserver:(id)a0;
- (id)taskServerForTaskUUID:(id)a0;
- (BOOL)registerTaskServerClassesWithProvider:(id)a0 error:(id *)a1;
- (BOOL)registerTaskServerClass:(Class)a0 error:(id *)a1;
- (id)createTaskServerEndpointForIdentifier:(id)a0 taskUUID:(id)a1 configuration:(id)a2 client:(id)a3 connectionQueue:(id)a4 error:(id *)a5;
- (void)addObserver:(id)a0 forTaskServerUUID:(id)a1 queue:(id)a2;

@end
