@class NSArray, NSMutableDictionary, NSString, RPCompanionLinkDevice, RPCompanionLinkClient;
@protocol AXRemoteDeviceConnectionDelegate;

@interface AXRemoteDevice : NSObject

@property (nonatomic) BOOL connected;
@property (nonatomic) long long contextType;
@property (nonatomic) long long deviceType;
@property (retain, nonatomic) NSArray *deviceRemoteActions;
@property (retain, nonatomic) NSMutableDictionary *deviceGestureCustomizations;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (retain, nonatomic) RPCompanionLinkClient *deviceLinkClient;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<AXRemoteDeviceConnectionDelegate> connectionDelegate;

- (id)initWithDevice:(id)a0;
- (void)disconnect;
- (void).cxx_destruct;
- (id)_deviceName;
- (void)_setRemoteAction:(id)a0 forHandGestureEventUsage:(long long)a1;
- (void)connectIfNecessary:(id /* block */)a0;
- (id)customizedRemoteActionForHandGestureEventUsage:(long long)a0;
- (id)remoteActionsForPreferredContextType:(long long)a0;
- (void)sendPayload:(id)a0 withEventID:(id)a1;
- (void)sendPayload:(id)a0 withEventID:(id)a1 withTimeout:(double)a2 completion:(id /* block */)a3;

@end
