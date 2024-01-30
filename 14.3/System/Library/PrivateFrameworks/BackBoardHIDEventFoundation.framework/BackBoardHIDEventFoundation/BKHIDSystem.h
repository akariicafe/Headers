@class BKHIDEventDeliveryManager, BKHIDClientConnectionManager, NSString, NSObject, BKHIDEventSenderCache;
@protocol BKHIDEventProcessor, BKHIDDisplayChangeObserving, BKHIDEventDispatcherProviding, OS_dispatch_queue, BKHIDSystemDelegate, OS_dispatch_mach;

@interface BKHIDSystem : NSObject <BKHIDSystemInterfacing> {
    struct __IOHIDEventSystem { } *_HIDEventSystem;
    struct __IOHIDEventSystemClient { } *_HIDEventSystemClient;
    NSObject<OS_dispatch_queue> *_gsEventQueue;
}

@property (getter=isFullyInitialized) BOOL fullyInitialized;
@property (retain, getter=HIDSystemChannel) NSObject<OS_dispatch_mach> *HIDSystemChannel;
@property (readonly, nonatomic) id<BKHIDEventProcessor> eventProcessor;
@property (retain, nonatomic) id<BKHIDDisplayChangeObserving> mainDisplayObserver;
@property (retain, nonatomic) id<BKHIDEventDispatcherProviding> dispatcherProvider;
@property (weak) id<BKHIDSystemDelegate> delegate;
@property (readonly) BKHIDEventDeliveryManager *deliveryManager;
@property (readonly) BKHIDEventSenderCache *senderCache;
@property (readonly) BKHIDClientConnectionManager *clientConnectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (struct __IOHIDEvent { } *)systemEventOfType:(unsigned int)a0 matchingEvent:(struct __IOHIDEvent { } *)a1 options:(unsigned int)a2;
- (void)startEventRouting;
- (id)init;
- (void).cxx_destruct;
- (void)startHIDSystem;
- (void)_performSynchronized:(id /* block */)a0;
- (void)dealloc;
- (void)registerIOHIDServicesCallback:(void /* function */ *)a0 matchingDictionary:(id)a1 target:(void *)a2 refCon:(void *)a3;
- (id)systemPropertyForKey:(id)a0;
- (void)startServerWithChannel:(id)a0;
- (id)IOHIDServicesMatching:(id)a0;
- (void)unregisterIOHIDServicesCallback:(void /* function */ *)a0 matchingDictionary:(id)a1 target:(void *)a2 refCon:(void *)a3;
- (void)injectHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)startEventProcessor:(id)a0 mainDisplayObserver:(id)a1 deliveryManager:(id)a2 dispatcherProvider:(id)a3;
- (void)injectGSEvent:(struct __GSEvent { } *)a0;
- (void)setSystemProperty:(id)a0 forKey:(id)a1;
- (void)_beginHandlingEvents;

@end
