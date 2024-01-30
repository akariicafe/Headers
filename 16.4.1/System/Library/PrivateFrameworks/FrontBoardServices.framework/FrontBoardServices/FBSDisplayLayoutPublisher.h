@class NSHashTable, NSString, FBSDisplayConfiguration, BSServiceConnectionListener, BSAtomicSignal, FBSDisplayLayout, NSObject, NSMutableSet, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FBSDisplayLayoutPublisher : NSObject <BSServiceConnectionListenerDelegate, FBSDisplayLayoutPublishing, BSInvalidatable> {
    BSAtomicSignal *_invalidatedSignal;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_queuesByQOS[3];
    NSObject<OS_xpc_object> *_queues_xLayoutByQOS[3];
    NSMutableSet *_queues_connectionsByQOS[3];
    FBSDisplayLayout *_mutableLayout;
    NSMutableSet *_mutableElementKeys;
    NSHashTable *_observers;
    NSObject<OS_xpc_object> *_xLayout;
    FBSDisplayLayout *_currentLayout;
    NSMutableOrderedSet *_transitionReasons;
    unsigned long long _transitionsCount;
    BOOL _dirty;
}

@property (copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;

+ (id)publisherWithConfiguration:(id)a0;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)addObserver:(id)a0;
- (id)addElement:(id)a0;
- (id)transitionAssertionWithReason:(id)a0;
- (void)flush;
- (id)_initWithConfiguration:(id)a0;
- (id)_addElement:(id)a0 forKey:(id)a1;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;

@end
