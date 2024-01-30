@class PGPlaybackState, NSString, PGControlsViewModelValues;
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
@property (readonly, copy, nonatomic) PGControlsViewModelValues *values;
@property (readonly, nonatomic) double preferredMinimumWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)handleSingleTap;
- (void)handleDoubleTap;
- (void)_updateViewModelValues;
- (void)handleActionButtonTapped;
- (void)handleCancelButtonTapped;
- (void)handleDoubleDoubleTap;
- (void)handleRestoreButtonTapped;
- (void)handleSkipBackButtonTapped;
- (void)handleSkipForwardButtonTapped;
- (void)handleSkipPrerollButtonTapped;
- (unsigned long long)recommendedUpdateCadenceForProgressBarWithWidthInPixels:(double)a0;
- (void)updatePlaybackStateWithDiff:(id)a0;

@end
