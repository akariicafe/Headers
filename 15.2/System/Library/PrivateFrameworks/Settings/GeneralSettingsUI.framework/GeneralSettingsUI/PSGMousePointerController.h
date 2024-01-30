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

- (void).cxx_destruct;
- (id)init;
- (id)globalDevicePreferences;
- (void)setGlobalDevicePreferences:(id)a0;
- (void)mousePointerDevicesDidDisconnect:(id)a0;
- (void)mousePointerDevicesDidConnect:(id)a0;
- (BOOL)hasMouse;
- (BOOL)hasTrackpad;
- (BOOL)hasMagicMouse;
- (void)setTrackingSpeedIndex:(int)a0;
- (int)trackingSpeedIndex;

@end
