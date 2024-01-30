@class SBIdleTimerDefaults, NSString, SBFTapToWakeGestureRecognizer;
@protocol SBTapToWakeDelegate;

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer;
@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer;
@property (retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults;
@property (weak, nonatomic) id<SBTapToWakeDelegate> delegate;
@property (nonatomic, getter=isScreenOff) BOOL screenOff;
@property (readonly, nonatomic) BOOL shouldTapToWake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTapToWakeSupported;

- (void)_evaluateEnablement;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)tapToWakeDidRecognize:(id)a0;
- (void)pencilToWakeDidRecognize:(id)a0;

@end
