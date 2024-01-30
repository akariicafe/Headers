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

- (BOOL)hasMagicMouse;
- (id)globalDevicePreferences;
- (void)mousePointerDevicesDidDisconnect:(id)a0;
- (int)trackingSpeedIndex;
- (void)mousePointerDevicesDidConnect:(id)a0;
- (void)setGlobalDevicePreferences:(id)a0;
- (BOOL)hasTrackpad;
- (void)setTrackingSpeedIndex:(int)a0;
- (BOOL)hasMouse;
- (id)init;
- (void).cxx_destruct;

@end
