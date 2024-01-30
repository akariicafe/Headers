@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CSSiriMobileBluetoothDeviceDataSource : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    struct BTSessionImpl { } *_session;
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    BOOL _attachingToSession;
    NSObject<OS_dispatch_group> *_sessionSetupGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceProxiesLock;
    NSMutableDictionary *_deviceProxiesByAddress;
    NSMutableDictionary *_deviceProxiesByDeviceUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getBTLocalDeviceWithCompletion:(id /* block */)a0;
- (void)_sessionTerminated:(struct BTSessionImpl { } *)a0;
- (void)device:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 serviceEventType:(int)a2 serviceSpecificEvent:(unsigned int)a3 result:(int)a4;
- (void)_sessionDetached:(struct BTSessionImpl { } *)a0;
- (void)_sessionAttached:(struct BTSessionImpl { } *)a0 result:(int)a1;
- (void)_tearDownLocalDevice;
- (void)_setUpLocalDevice;
- (void)localDevice:(struct BTLocalDeviceImpl { } *)a0 event:(int)a1 result:(int)a2;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_attachToSession;
- (void)_cleanUpDeviceProxies;
- (void)_detachFromSession;
- (id)_deviceProxies;
- (id)_deviceProxyWithAddress:(id)a0 createsIfAbsent:(BOOL)a1;
- (id)_deviceProxyWithUID:(id)a0 createsIfAbsent:(BOOL)a1;
- (void)_reloadForDevice:(struct BTDeviceImpl { } *)a0;
- (void)_setUpAccessoryManager;
- (void)_tearDownAccessoryManager;
- (void)accessoryManager:(struct BTAccessoryManagerImpl { } *)a0 event:(int)a1 device:(struct BTDeviceImpl { } *)a2 state:(int)a3;
- (id)deviceWithAddress:(id)a0;
- (id)deviceWithUID:(id)a0;
- (void)getBTDeviceWithAddress:(id)a0 completion:(id /* block */)a1;
- (void)getBTDeviceWithDeviceUID:(id)a0 completion:(id /* block */)a1;

@end
