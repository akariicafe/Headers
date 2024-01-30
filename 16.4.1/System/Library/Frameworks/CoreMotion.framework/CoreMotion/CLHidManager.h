@class HIDManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CLHidManagerDelegate;

@interface CLHidManager : NSObject

@property (nonatomic) id<CLHidManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) HIDManager *manager;
@property (retain, nonatomic) NSMutableArray *clientDevices;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)activateClientDevice:(id)a0;
- (id)createDeviceForMatchingDictionary:(id)a0;
- (id)getClientDeviceMatchingDict:(id)a0;
- (id)getClientDeviceMatchingHIDDevice:(id)a0;
- (id)getHidDeviceFromEnumeratedDevicesMatching:(id)a0;
- (id)registerForDeviceMatching:(id)a0;
- (void)sendMonitorUpdateForDevice:(id)a0 added:(BOOL)a1;
- (void)unregisterForDeviceMatching:(id)a0;
- (void)updateClientDeviceWithHidDevice:(id)a0 added:(BOOL)a1;

@end
