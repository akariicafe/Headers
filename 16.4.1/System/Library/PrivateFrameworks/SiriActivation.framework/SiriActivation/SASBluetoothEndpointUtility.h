@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SASBluetoothEndpointUtility : NSObject {
    NSObject<OS_dispatch_queue> *_serialBluetoothEndpointQueue;
}

@property (retain, getter=_endpointType, setter=_setEndpointType:) NSString *endpointType;

- (void)_registerListenersAndSetEndpointTypeWithNotification:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)isConnectedToBluetoothVehicle;
- (void)_setEndpointTypeWithNotification:(id)a0;
- (void).cxx_destruct;

@end
