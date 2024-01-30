@class PLTimer, CMPocketStateManager, BrightnessSystemClient, CMMotionActivityManager, NSString, PLStateTrackingComposition, NSOperationQueue, CMDeviceOrientationManager;

@interface PLSensorAgent : PLAgent <CMPocketStateDelegate>

@property BOOL firstProximityEvent;
@property (retain) PLTimer *proximityTimer;
@property (retain) PLStateTrackingComposition *stateTracker;
@property (retain) BrightnessSystemClient *brightnessSystemClient;
@property (retain) NSOperationQueue *operationQueue;
@property (retain) CMPocketStateManager *pocketStateManager;
@property (retain) CMMotionActivityManager *motionActivityManager;
@property (retain) CMDeviceOrientationManager *deviceOrientationManager;
@property struct __IOHIDEventSystemClient { } *proximityHIDClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionActivity;
+ (id)entryEventPointDefinitionPocketState;
+ (id)entryEventPointDefinitionProximity;
+ (id)entryEventPointDefinitionALS;
+ (void)load;
+ (id)entryEventPointDefinitionOrientation;

- (void)logEventPointProximity:(id)a0;
- (void)logEventPointDeviceOrientation:(id)a0;
- (void)logEventPointPocketState:(id)a0;
- (void)logEventPointALS:(id)a0;
- (void)handleBrightnessClientNotification:(id)a0 withValue:(id)a1;
- (void)handleMotionActivityManagerNotification:(id)a0;
- (void)handlePocketStateManagerNotification:(long long)a0;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)logEventPointActivity:(id)a0;
- (void)pocketStateManager:(id)a0 didUpdateState:(long long)a1;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)handleOrientationManagerNotification:(id)a0;

@end
