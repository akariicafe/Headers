@class NSString, BKHIDEventDeliveryObserverService, BSServiceConnectionListener;

@interface BKHIDEventDeliveryObserverServiceListener : NSObject <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener *_connectionListener;
    BKHIDEventDeliveryObserverService *_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
