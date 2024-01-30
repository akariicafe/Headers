@class NSArray, AVOutputDeviceDiscoverySession;

@interface APKOutputDeviceDiscoverySession : NSObject

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session;
@property (readonly, nonatomic) NSArray *availableOutputDevices;

- (void)deactivate;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void).cxx_destruct;

@end
