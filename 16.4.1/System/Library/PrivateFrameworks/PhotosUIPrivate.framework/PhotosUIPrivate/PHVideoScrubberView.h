@class UIImage, PUPlayheadView, NSString, PXVideoScrubberController, UIScrollView, UIView, AVPlayer;
@protocol PHVideoScrubberFilmstripView, PHVideoScrubberViewInteractionDelegate, PHVideoScrubberFilmstripViewProvider;

@interface PHVideoScrubberView : UIView <PXVideoScrubberControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    unsigned long long _previousPlayState;
    struct { BOOL didBeginTouching; BOOL didEndTouching; BOOL willBeginDragging; BOOL didEndDragging; BOOL willBeginDecelerating; BOOL didEndDecelerating; } _interactionDelegateRespondsTo;
}

@property (nonatomic, setter=_setNeedsUpdateFilmStripView:) BOOL _needsUpdateFilmStripView;
@property (nonatomic, setter=_setNeedsUpdateVideoScrubberController:) BOOL _needsUpdateVideoScrubberController;
@property (retain, nonatomic, setter=_setFilmStripView:) UIView<PHVideoScrubberFilmstripView> *_filmStripView;
@property (retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController;
@property (retain, nonatomic, setter=_setScrollView:) UIScrollView *scrollView;
@property (retain, nonatomic, setter=_setPlayheadView:) PUPlayheadView *_playheadView;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) double estimatedDuration;
@property (retain, nonatomic) UIImage *placeholderThumbnail;
@property (weak, nonatomic) id<PHVideoScrubberViewInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<PHVideoScrubberFilmstripViewProvider> filmstripViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)_lengthForDuration:(double)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleLongPressGesture:(id)a0;
- (id)_scrollView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)videoScrubberControllerDidUpdate:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (double)videoScrubberController:(id)a0 lengthForDuration:(double)a1;
- (void)_handleTapGesture:(id)a0;
- (id)_currentAVAsset;
- (id)_currentVideoComposition;
- (void)_handleInteractionBegan;
- (void)_handleInteractionEndedAndTogglePlayState:(BOOL)a0;
- (void)_handleTouchGesture:(id)a0;
- (void)_invalidateFilmStripView;
- (void)_invalidateVideoScrubberController;
- (BOOL)_isUserInteractingWithScrollView;
- (BOOL)_playerIsPlaying;
- (void)_updateFilmStripViewIfNeeded;
- (void)_updatePlayheadFrame;
- (void)_updateScrollViewContentOffset;
- (void)_updateVideoscrubberControllerIfNeeded;
- (void)_updateVisibleRectOfFilmStripView;

@end
