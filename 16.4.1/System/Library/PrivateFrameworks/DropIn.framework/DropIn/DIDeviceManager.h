@class NSArray, DIDevice, DIXPCConnectionManager;
@protocol DIDeviceManagerDelegate;

@interface DIDeviceManager : NSObject <DIDeviceListDelegate, DIDeviceStatusDelegate, DIXPCManagerCheckInObserver>

@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) DIDevice *currentDevice;
@property (weak, nonatomic) id<DIDeviceManagerDelegate> delegate;

- (void)didAddDevice:(id)a0;
- (void)didRemoveDevice:(id)a0;
- (void).cxx_destruct;
- (void)didLoadDevices:(id)a0;
- (void)didUpdateDevice:(id)a0;
- (id)initWithConnectionManager:(id)a0;
- (void)xpcManagerDidPerformDaemonCheckIn:(id)a0;

@end
