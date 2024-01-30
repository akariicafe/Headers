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

+ (id)entryEventPointDefinitionPocketState;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionProximity;
+ (void)load;
+ (id)entryEventPointDefinitionActivity;
+ (id)entryEventPointDefinitionALS;
+ (id)entryEventPointDefinitionOrientation;
+ (BOOL)shouldLogRearLux;

- (void)initOperatorDependancies;
- (void)handlePocketStateManagerNotification:(long long)a0;
- (void)log;
- (void)pocketStateManager:(id)a0 didUpdateState:(long long)a1;
- (void)handleMotionActivityManagerNotification:(id)a0;
- (void)logEventPointProximity:(id)a0;
- (void)handleOrientationManagerNotification:(id)a0;
- (void)logEventPointALS:(id)a0;
- (void)logEventPointActivity:(id)a0;
- (void)logEventPointPocketState:(id)a0;
- (void)initTaskOperatorDependancies;
- (void)logEventPointDeviceOrientation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleBrightnessClientNotification:(id)a0 withValue:(id)a1;

@end
