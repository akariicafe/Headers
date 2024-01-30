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

- (id)setObservesDeferringResolutions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeConnectionForPID:(int)a0;
- (void)addConnection:(id)a0 forPID:(int)a1;
- (void)resolutionsDidChange:(id)a0 forPID:(int)a1;

@end
