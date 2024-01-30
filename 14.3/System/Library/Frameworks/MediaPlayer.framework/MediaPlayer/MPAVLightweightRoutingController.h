@class NSArray, NSString, AVOutputDeviceDiscoverySession;
@protocol MPAVLightweightRoutingControllerDelegate;

@interface MPAVLightweightRoutingController : NSObject {
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
}

@property (nonatomic) long long discoveryMode;
@property (readonly, nonatomic) NSArray *pickedRoutes;
@property (readonly, nonatomic, getter=isDevicePresenceDetected) BOOL devicePresenceDetected;
@property (readonly, copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<MPAVLightweightRoutingControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)_outputContextDevicesDidChangeNotification:(id)a0;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (id)initWithName:(id)a0;

@end
