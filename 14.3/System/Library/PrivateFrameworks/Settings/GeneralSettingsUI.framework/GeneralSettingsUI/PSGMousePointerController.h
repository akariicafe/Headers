@class NSString, NSMutableSet;
@protocol BSInvalidatable;

@interface PSGMousePointerController : NSObject <BKSMousePointerDeviceObserver>

@property (retain) id<BSInvalidatable> observerToken;
@property (retain, nonatomic) NSMutableSet *pointerDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)mousePointerDevicesDidConnect:(id)a0;
- (void)setTrackingSpeedIndex:(int)a0;
- (void)mousePointerDevicesDidDisconnect:(id)a0;
- (id)globalDevicePreferences;
- (void)setGlobalDevicePreferences:(id)a0;
- (BOOL)hasMagicMouse;
- (BOOL)hasTrackpad;
- (BOOL)hasMouse;
- (int)trackingSpeedIndex;

@end
