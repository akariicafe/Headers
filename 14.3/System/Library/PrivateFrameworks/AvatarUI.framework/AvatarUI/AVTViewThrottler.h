@class AVTView, NSTimer, NSString;
@protocol AVTDeviceResourceConsumerDelegate, AVTUILogger;

@interface AVTViewThrottler : NSObject <AVTDeviceResourceConsumer>

@property (readonly, nonatomic) AVTView *avtView;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (retain, nonatomic) NSTimer *autoUnthrottlingTimer;
@property (nonatomic) BOOL throttling;
@property (weak, nonatomic) id<AVTDeviceResourceConsumerDelegate> consumerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)throttle;
- (void)releaseRenderingResourceForEstimatedDuration:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unthrottle;
- (id)initWithAVTView:(id)a0 environment:(id)a1;
- (void)cancelAutoUnthrottling;
- (void)applyThrottling;
- (void)scheduleAutoUnthrottlingAfterDelay:(double)a0;
- (void)autoUnthrottle;
- (void)throttleForDelay:(double)a0;

@end
