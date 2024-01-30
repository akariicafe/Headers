@class UIViewController, NSString, NSTimer, _TVNonFocusSwipeUpCapture, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol TVMediaPlaybackManagerDelegate, TVMediaController;

@interface TVMediaPlaybackManager : NSObject <UIGestureRecognizerDelegate> {
    int _mediaPlaybackState;
    int _mediaPlaybackTrigger;
    unsigned long long _mediaPlaybackStateModifier;
    unsigned long long _mediaPlaybackTriggerModifier;
    NSTimer *_backgroundedTimer;
    _TVNonFocusSwipeUpCapture *_swipeUpCapture;
    struct { BOOL hasShouldEnableUIModeImplicitly; BOOL hasEvaluateSwipeUpMessage; BOOL hasPresentPlaybackController; } _delegateFlags;
    BOOL _isFirstAppearance;
}

@property (readonly, nonatomic) UIViewController<TVMediaController> *mediaController;
@property (weak, nonatomic) id<TVMediaPlaybackManagerDelegate> delegate;
@property (readonly, nonatomic) UITapGestureRecognizer *menuGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *swipeUpGestureRecognizer;
@property (nonatomic) double showcaseFactor;
@property (readonly, nonatomic) BOOL shouldHideUI;
@property (readonly, nonatomic) long long currentUIMode;
@property (nonatomic) BOOL goesToForegroundOnFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)onAppear;
- (BOOL)_shouldPause;
- (void)_onMenu;
- (void)onEvent;
- (void)onDisappear;
- (void)onSupplementaryUIShouldDismiss;
- (id)initWithMediaController:(id)a0;
- (void)_onSwipeUp;
- (void)_processTrigger;
- (void)_onShowcaseFactorDidChange;
- (int)_processUndefinedStateTriggers;
- (int)_processBackgroundedStateTriggers;
- (int)_processForegroundedStateTriggers;
- (int)_processWaitingForTimeoutStateTriggers;
- (int)_processWillBeBackgroundedStateTriggers;
- (int)_processWillBeForegroundedStateTriggers;
- (int)_processPausedStateTriggers;
- (void)_processStateExit;
- (void)_processStateEnter;
- (BOOL)_canMenu;
- (BOOL)_canSwipeUp;
- (void)_scheduleBackgroundedTimer;
- (void)_onTimeout;
- (void)onMediaControllerStateDidChange;
- (BOOL)onSupplementaryUIShouldPresent;

@end
