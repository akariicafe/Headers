@class AVOutputDeviceDiscoverySession;

@interface AVOutputControlDeviceDiscovery : NSObject

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session;

- (void)deactivate;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (BOOL)supportsFitnessDataDestinationForDeviceIdentifier:(id)a0;

@end
