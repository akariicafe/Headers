@class NSNumber;
@protocol SUICAutoDismissalStrategyDelegate;

@interface SUICAutoDismissalStrategy : NSObject {
    NSNumber *_lastShouldDismissValue;
}

@property (nonatomic) long long autoDismissalReason;
@property (readonly, nonatomic) double idleTimeout;
@property (readonly, nonatomic) double extendedIdleTimeout;
@property (readonly, nonatomic) BOOL deviceSupportsFaceDetection;
@property (readonly, nonatomic) BOOL deviceSupportsRaiseGestureDetection;
@property (readonly, nonatomic) double viewRequiringExtendedTimeoutStartTime;
@property (weak, nonatomic) id<SUICAutoDismissalStrategyDelegate> delegate;
@property (nonatomic) BOOL userInteractedWithTouchScreen;
@property (nonatomic) BOOL userInteractedWithTouchIDSensor;
@property (nonatomic) long long latestFaceAwarenessEvent;
@property (nonatomic) long long latestDeviceMotionEvent;
@property (nonatomic, getter=isVideoPlaying) BOOL videoPlaying;
@property (nonatomic, getter=isViewRequiringExtendedTimeoutVisible) BOOL viewRequiringExtendedTimeoutVisible;
@property (readonly, nonatomic) double idleTimeInterval;
@property (readonly, nonatomic) BOOL shouldDismiss;

- (void).cxx_destruct;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeeded;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeededPermanent:(BOOL)a0;
- (id)initWithIdleTimeout:(double)a0 extendedIdleTimeout:(double)a1 deviceSupportsFaceDetection:(BOOL)a2 deviceSupportsRaiseGestureDetection:(BOOL)a3;
- (void)setViewRequiringExtendedTimeoutStartTime:(double)a0;

@end
