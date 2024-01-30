@class NSString, BKHIDEventDeliveryObserverServiceListener, NSMutableIndexSet, BSMutableIntegerMap;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver> {
    BSMutableIntegerMap *_connectionsByPID;
    BKHIDEventDeliveryObserverServiceListener *_serviceListener;
    NSMutableIndexSet *_observerPIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSMutableIntegerMap *_resolutionsByPID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)setObservesDeferringResolutions:(id)a0;
- (void)addConnection:(id)a0 forPID:(int)a1;
- (void)removeConnectionForPID:(int)a0;
- (void)resolutionsDidChange:(id)a0 forPID:(int)a1;

@end
