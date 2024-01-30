@class NSXPCConnection, AXSSMotionTrackingExpressionConfiguration, NSArray, NSSet, NSValue, AXSSMotionTrackingInputConfiguration, AXSSRateLimitingLogger, AXSSMotionTrackingState;
@protocol AXSSMotionTrackingDaemonProtocol, AXSSMotionTrackerDelegate;

@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol>

@property (class, readonly, nonatomic) NSSet *supportedExpressions;
@property (class, readonly, nonatomic) NSArray *supportedExpressionSensitivitiesAscending;

@property (readonly, nonatomic) id<AXSSMotionTrackingDaemonProtocol> _motionTrackingDaemon;
@property (retain, nonatomic) NSXPCConnection *_motionTrackingDaemonConnection;
@property (nonatomic) BOOL _tracking;
@property (nonatomic) BOOL _hasBeenStarted;
@property (retain, nonatomic) AXSSRateLimitingLogger *_loggingRateLimiter;
@property (nonatomic) BOOL debugOverlayEnabled;
@property (copy, nonatomic) AXSSMotionTrackingState *state;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (weak, nonatomic) id<AXSSMotionTrackerDelegate> delegate;
@property (nonatomic) unsigned long long motionTrackingMode;
@property (nonatomic) double sensitivity;
@property (retain, nonatomic) NSValue *lookAtPoint;
@property (copy, nonatomic) AXSSMotionTrackingInputConfiguration *inputConfiguration;
@property (copy, nonatomic) AXSSMotionTrackingExpressionConfiguration *expressionConfiguration;
@property (nonatomic) double joystickModeMovementThreshold;

- (void)_updateState:(id)a0;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)recalibrateFace;
- (void)_changeState:(id)a0;
- (void)_motionTrackingDaemonWasInterruptedFromXPC;
- (void)motionTrackingDaemonUpdatedState:(id)a0;

@end
