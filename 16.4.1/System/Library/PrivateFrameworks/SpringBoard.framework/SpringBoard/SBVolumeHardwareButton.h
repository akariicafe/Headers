@class SBPressSequenceObserver, NSString, NSHashTable, SBVolumeHardwareButtonActions, SBPressGestureRecognizer, UIGestureRecognizer;

@interface SBVolumeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBPressPrecedenceArbiter> {
    unsigned long long _volumeUpAggdStartTime;
    unsigned long long _volumeDownAggdStartTime;
    long long _homeButtonType;
    SBPressGestureRecognizer *_volumeIncreaseButtonPressGestureRecognizer;
    SBPressGestureRecognizer *_volumeDecreaseButtonPressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    UIGestureRecognizer *_shutdownGestureRecognizer;
}

@property (readonly, nonatomic) SBPressSequenceObserver *volumeIncreaseSequenceObserver;
@property (readonly, nonatomic) SBPressSequenceObserver *volumeDecreaseSequenceObserver;
@property (readonly, nonatomic) SBVolumeHardwareButtonActions *buttonActions;
@property (weak, nonatomic) NSHashTable *volumePressBandits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_createGestureRecognizers;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)preemptablePressGestureRecognizers;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_aggdLogVolumeDecreaseButtonDown:(BOOL)a0;
- (void)_aggdLogVolumeIncreaseButtonDown:(BOOL)a0;
- (void)_logVolumeButtonWithObserver:(id)a0 down:(BOOL)a1;
- (void)addVolumePressBandit:(id)a0;
- (void)cancelVolumePress;
- (id)initWithScreenshotGestureRecognizer:(id)a0 shutdownGestureRecognizer:(id)a1 homeButtonType:(long long)a2;
- (void)removeVolumePressBandit:(id)a0;
- (void)volumeDecreasePress:(id)a0;
- (void)volumeIncreasePress:(id)a0;

@end
