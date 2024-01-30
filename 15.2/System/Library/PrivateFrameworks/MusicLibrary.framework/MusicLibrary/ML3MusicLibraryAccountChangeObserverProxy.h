@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface ML3MusicLibraryAccountChangeObserverProxy : NSObject <MLMediaLibraryAccountChangeObserver>

@property (class, readonly, nonatomic) ML3MusicLibraryAccountChangeObserverProxy *sharedProxy;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, nonatomic) NSHashTable *weakObservers;
@property (readonly, nonatomic) NSHashTable *readonlyObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAccountChangeObserver:(id)a0;
- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)_init;
- (void)addAccountChangeObserver:(id)a0;

@end
