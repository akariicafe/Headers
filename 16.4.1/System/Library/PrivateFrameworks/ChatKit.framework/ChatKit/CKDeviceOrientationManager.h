@class BKSAccelerometer, NSMutableSet, NSString;
@protocol CKDeviceOrientationManagerDelegate;

@interface CKDeviceOrientationManager : NSObject <BKSAccelerometerDelegate>

@property (retain, nonatomic) BKSAccelerometer *accelerometer;
@property (retain, nonatomic) NSMutableSet *listenerKeys;
@property (weak, nonatomic) id<CKDeviceOrientationManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isListeningForOrientationEvents) BOOL listeningForOrientationEvents;
@property (readonly, nonatomic) long long currentDeviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (void)accelerometer:(id)a0 didChangeDeviceOrientation:(long long)a1;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_broadcastOrientation:(long long)a0;
- (long long)_springboardDeviceLockOrientation;
- (void)_updateListeningState;
- (BOOL)_wantsOrientationEvents;
- (void)beginListeningForOrientationEventsWithKey:(id)a0;
- (void)endListeningForOrientationEventsWithKey:(id)a0;

@end
