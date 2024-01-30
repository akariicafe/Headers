@class NSObject, NSMapTable, NSString, NSHashTable, BSMutableIntegerMap, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface BKSTouchDeliveryObservationService : NSObject <BKSTouchDeliveryObserving_IPC> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_touchClientQueue;
}

@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) BSMutableIntegerMap *touchIdentifierToObserverLists;
@property (retain, nonatomic) NSMapTable *observersToTouchIdentifiers;
@property (retain, nonatomic) NSHashTable *generalObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)_queue_removeObserver:(id)a0 forTouchIdentifier:(unsigned int)a1;
- (oneway void)addObserver:(id)a0 forTouchIdentifier:(unsigned int)a1;
- (oneway void)addObserver:(id)a0;
- (oneway void)removeObserver:(id)a0;
- (id)_queue_observersForTouchIdentifier:(unsigned int)a0;
- (BOOL)_queue_addObserver:(id)a0 forTouchIdentifier:(unsigned int)a1;
- (void).cxx_destruct;
- (void)_connectToTouchDeliveryService;
- (id)init;
- (void)dealloc;
- (void)_queue_removeObserversForTouchIdentifier:(unsigned int)a0;
- (void)observeTouchEventDeliveryDidOccur:(id)a0;

@end
