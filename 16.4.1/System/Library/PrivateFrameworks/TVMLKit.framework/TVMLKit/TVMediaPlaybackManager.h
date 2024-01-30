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

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_shouldPause;
- (void)onDisappear;
- (void)onAppear;
- (id)initWithMediaController:(id)a0;
- (void)onSupplementaryUIShouldDismiss;
- (void)_onMenu;
- (void)onMediaControllerStateDidChange;
- (void)_processTrigger;
- (void)onEvent;
- (BOOL)_canMenu;
- (BOOL)_canSwipeUp;
- (void)_onShowcaseFactorDidChange;
- (void)_onSwipeUp;
- (void)_onTimeout;
- (int)_processBackgroundedStateTriggers;
- (int)_processForegroundedStateTriggers;
- (int)_processPausedStateTriggers;
- (void)_processStateEnter;
- (void)_processStateExit;
- (int)_processUndefinedStateTriggers;
- (int)_processWaitingForTimeoutStateTriggers;
- (int)_processWillBeBackgroundedStateTriggers;
- (int)_processWillBeForegroundedStateTriggers;
- (void)_scheduleBackgroundedTimer;
- (BOOL)onSupplementaryUIShouldPresent;

@end
