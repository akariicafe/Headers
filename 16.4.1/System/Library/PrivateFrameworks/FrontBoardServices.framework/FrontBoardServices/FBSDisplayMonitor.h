@class FBSDisplaySource, FBSDisplayConfiguration, NSArray, NSString, NSSet, NSHashTable, CADisplay, NSObject, FBSDisplayIdentity, NSMapTable;
@protocol OS_dispatch_queue, FBSDisplayObserving, FBSDisplayTransformer;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {
    CADisplay *_mainDisplay;
    FBSDisplaySource *_mainDisplaySource;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<FBSDisplayObserving> _lock_bookendObserver;
    NSHashTable *_lock_observers;
    NSMapTable *_lock_sourcesByDisplay;
    BOOL _lock_allowsUnknownDisplays;
    BOOL _lock_canPostToBookendObserver;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly, nonatomic) BOOL canPostToBookendObserver;
@property (readonly, weak, nonatomic) id<FBSDisplayObserving> bookendObserver;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (readonly, nonatomic) id<FBSDisplayTransformer> transformer;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (readonly, copy, nonatomic) NSSet *connectedIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAllowsUnknownDisplays:(BOOL)a0;
- (id)initWithInitializationCompletion:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)_postInitialBookendObserverConnections;
- (void)_lock_enumerateConnectedWithBlock:(id /* block */)a0;
- (id)configurationForIdentity:(id)a0;
- (id)_sortedSources;
- (void)dealloc;
- (BOOL)allowsUnknownDisplays;
- (void)removeObserver:(id)a0;
- (id)_initWithBookendObserver:(id)a0 transformer:(id)a1;
- (id)init;
- (void)invalidate;
- (void)_updateTransformsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_lock_enumerateSourcesWithBlock:(id /* block */)a0;

@end
