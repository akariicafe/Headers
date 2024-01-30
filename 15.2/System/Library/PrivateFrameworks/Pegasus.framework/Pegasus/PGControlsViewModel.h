@class NSString, PGPlaybackState, UIImage, PGControlsViewModelValues;
@protocol PGControlsViewModelDelegate;

@interface PGControlsViewModel : NSObject <PGPlaybackStateDiffConsumer> {
    double _lastKnownElapsedTime;
    BOOL _hasBegun;
}

@property (weak, nonatomic) id<PGControlsViewModelDelegate> delegate;
@property (readonly, copy, nonatomic) PGPlaybackState *playbackState;
@property (nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic) long long secondsUntilPrerollSkippable;
@property (readonly, nonatomic) BOOL isPrerollSkippable;
@property (nonatomic, getter=isInActivitySession) BOOL inActivitySession;
@property (copy, nonatomic) NSString *screenSharingTitle;
@property (retain, nonatomic) UIImage *screenSharingAvatar;
@property (readonly, copy, nonatomic) PGControlsViewModelValues *values;
@property (readonly, nonatomic) double preferredMinimumWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)handleRestoreButtonTapped;
- (void)handleSkipPrerollButtonTapped;
- (void)handleSingleTap;
- (void)handleDoubleTap;
- (void)handleDoubleDoubleTap;
- (void)updatePlaybackStateWithDiff:(id)a0;
- (unsigned long long)recommendedUpdateCadenceForProgressBarWithWidthInPixels:(double)a0;
- (void)handleActionButtonTapped;
- (void)handleSkipBackButtonTapped;
- (void)handleSkipForwardButtonTapped;
- (void)handleCancelButtonTapped;
- (void)_updateViewModelValues;

@end
