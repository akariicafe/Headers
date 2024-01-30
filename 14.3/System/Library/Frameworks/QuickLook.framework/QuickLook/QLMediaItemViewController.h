@class UIView, NSString, UITapGestureRecognizer, QLMediaScrubberGesture, NSTimer, NSMutableDictionary, NSNumber, NSLayoutConstraint, UILabel, UIScrollView;

@interface QLMediaItemViewController : QLMediaItemBaseViewController <QLMediaScrubberGestureDelegate, UIGestureRecognizerDelegate> {
    NSMutableDictionary *_playingInfo;
    UIView *_timeLabelBackground;
    UILabel *_timeLabel;
    UIScrollView *_scrubberScrollView;
    NSLayoutConstraint *_timeLabelConstraintX;
    NSLayoutConstraint *_timeLabelConstraintY;
    NSTimer *_playbackTimeHiddenTimer;
    long long _playbackTimeFormat;
    BOOL _wasPlayingBeforeStartScrubbing;
    NSNumber *_isSeeking;
}

@property (retain, nonatomic) QLMediaScrubberGesture *scrubGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapToPlayGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)showTimeLabelIfNeeded;
- (void)hideTimeLabelAfterDelay;
- (void)dealloc;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)handlePerformedKeyCommandIfNeeded:(id)a0;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (id)timeLabelScrollView;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (id)registeredKeyCommands;
- (void)previewIsAppearingWithProgress:(double)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)_updateCommandCenterPlayingInfoWithCurrentPlaybackTimeInformation;
- (void)_unregisterForCommandCenterHandlers;
- (void)hideTimeLabelAnimated:(BOOL)a0;
- (void)setTimeLabelNeedsUpdate;
- (id)labelTextWithFormat:(long long)a0 elapsedInterval:(double)a1 remainingInterval:(double)a2;
- (void)setUpTimeLabelIfNeeded;
- (void)hideTimeLabel;
- (long long)userTappedPlayInControlCenter:(id)a0;
- (long long)userTappedPauseInControlCenter:(id)a0;
- (long long)userScrubbedInControlCenter:(id)a0;
- (long long)togglePlaybackFromControlCenter:(id)a0;
- (id)_playingInfoWithPlaybackDuration:(double)a0 elapsedTime:(double)a1;
- (void)scrubberDidStartScrubbing:(id)a0;
- (void)scrubber:(id)a0 didChangeValue:(float)a1;
- (void)scrubberDidEndScrubbing:(id)a0;
- (void)observePlayingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)stringFromTimeInterval:(double)a0;
- (BOOL)shouldHandleRegisteringForCommandCenterHandlers;
- (void)hostApplicationDidEnterBackground:(id)a0;
- (void)tapToPlayGestureChanged:(id)a0;
- (void)_registerForCommandCenterHandlers;
- (void)removeTimeLabel;
- (void)showTimeLabel;

@end
