@class NSArray, NSString, AVOutputDeviceDiscoverySession, NSDate, AVOutputContext;
@protocol MPAVLightweightRoutingControllerDelegate;

@interface MPAVLightweightRoutingController : NSObject {
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    AVOutputContext *_avOutputContext;
    BOOL _notificationScheduled;
    NSDate *_lastOutputContextNotificationDate;
}

@property (nonatomic) long long discoveryMode;
@property (readonly, nonatomic) NSArray *pickedRoutes;
@property (readonly, nonatomic, getter=isDevicePresenceDetected) BOOL devicePresenceDetected;
@property (readonly, copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<MPAVLightweightRoutingControllerDelegate> delegate;

- (id)initWithName:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)_onSyncSelf_schedulePickedRoutesChangedNotification;
- (void)_outputContextDevicesDidChangeNotification:(id)a0;
- (void)_postPickedRoutesChangedNotification;

@end
