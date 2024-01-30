@class UIView, NSString, PMClipProvider, AVPlayerItem, AVPlayer, PMScrubberImageSource, NSObject, PMTrimmerDebugView, NSMutableArray, UIMovieScrubber;
@protocol PMTrimmerDelegate;

@interface PMTrimmerViewController : UIViewController <UIMovieScrubberDelegate, UIMovieScrubberDataSource> {
    struct { BOOL respondsToWillStartTrimmingWithClipProvider; BOOL respondsToShouldContinueTrimmingWithClipProvider_startTime_endTime; BOOL respondsToDidContinueTrimmingWithClipProvider_startTime_endTime; BOOL respondsToDidEndTrimmingWithClipProvider_startTime_endTime; } _delegateFlags;
}

@property (retain, nonatomic) NSObject *playerPeriodicTimeObserver;
@property (retain, nonatomic) NSObject *trimBoundaryTimeObserver;
@property (retain, nonatomic, setter=_setPlayerItemForObserving:) AVPlayerItem *_playerItemForObserving;
@property (retain, nonatomic) UIView *scrubberView;
@property (retain, nonatomic) UIMovieScrubber *movieScrubber;
@property (retain, nonatomic) PMTrimmerDebugView *debugOverlay;
@property (retain, nonatomic) PMScrubberImageSource *thumbnailSource;
@property (retain, nonatomic) NSString *thumbnailSourceAssetID;
@property (retain, nonatomic) NSMutableArray *otherRangeLayers;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoAspectRatio;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic) int inUseScrubberHandle;
@property (nonatomic) double deferredSeekTime;
@property (nonatomic) double lastSeekWallClockTime;
@property BOOL playerBusySeeking;
@property (retain, nonatomic) PMClipProvider *clipProvider;
@property (weak, nonatomic) id<PMTrimmerDelegate> delegate;
@property (nonatomic) int projectFrameRate;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL showsDebugMetadataOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)movieScrubber:(id)a0 evenlySpacedTimestamps:(int)a1 startingAt:(id)a2 endingAt:(id)a3;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_updateTrimHandles;
- (void)movieScrubber:(id)a0 valueDidChange:(double)a1;
- (double)movieScrubberDuration:(id)a0;
- (void)movieScrubber:(id)a0 editingStartValueDidChange:(double)a1;
- (void)movieScrubber:(id)a0 editingEndValueDidChange:(double)a1;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)a0;
- (void)_updateDebugOverlay;
- (void)movieScrubberDidBeginAnimatingZoom:(id)a0;
- (void)movieScrubberDidEndAnimatingZoom:(id)a0;
- (void)movieScrubber:(id)a0 willZoomToMinimumValue:(double)a1 maximumValue:(double)a2;
- (void)movieScrubberDidBeginScrubbing:(id)a0 withHandle:(int)a1;
- (void)movieScrubberDidEndScrubbing:(id)a0 withHandle:(int)a1;
- (void)movieScrubber:(id)a0 requestThumbnailImageForTimestamp:(id)a1;
- (double)movieScrubberThumbnailAspectRatio:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)_invalidate;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_playerIsPlaying;
- (void)viewDidLoad;
- (void)_createView;
- (void)_updateScrubberThumbVisibility;
- (void)_seekToTime:(double)a0 completionHandler:(id /* block */)a1;
- (void)_playerItemDidReachEnd:(id)a0;
- (void)_deferredSeek;
- (void)_deferredSeekToTime:(double)a0;
- (void)_updateScrubberTime;
- (void)_seekPlayerToBeginning;
- (void)_updateOtherRanges;
- (void)updateDebugMetadataOverlay;

@end
