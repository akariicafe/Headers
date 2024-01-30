@class HUCameraLoadingActivityIndicatorView, HFCameraPlaybackEngine, UIImageView, NSString, UILabel, UIView;
@protocol HFCameraRecordingEvent;

@interface HUCameraPlayerAccessoryViewController : UIViewController <HFCameraPlaybackEngineObserver>

@property (retain, nonatomic) UIImageView *noResponseView;
@property (retain, nonatomic) HUCameraLoadingActivityIndicatorView *loadingActivityIndicator;
@property (retain, nonatomic) UILabel *noActivityLabel;
@property (retain, nonatomic) UILabel *primaryErrorLabel;
@property (retain, nonatomic) UILabel *secondaryErrorLabel;
@property (nonatomic) BOOL showingNoActivity;
@property (nonatomic) BOOL showingError;
@property (nonatomic) BOOL showingLoadingIndicator;
@property (nonatomic) unsigned long long currentAccessMode;
@property (weak, nonatomic) id<HFCameraRecordingEvent> lastDisplayedEvent;
@property (nonatomic) BOOL reachabilityEventWasOffline;
@property (nonatomic) unsigned long long lastEngineMode;
@property (nonatomic) BOOL canShowOverlayContent;
@property (nonatomic) BOOL shouldShowLoadingIndicatorForClipPlayback;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (weak, nonatomic) UIView *loadingOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newLabel;

- (id)initWithPlaybackEngine:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)playbackEngine:(id)a0 didUpdateTimeControlStatus:(unsigned long long)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackError:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateEvents:(id)a1;
- (void)playbackEngine:(id)a0 didRemoveEvents:(id)a1;
- (void)hu_reloadData;
- (void)_updateAllOverlayStateAnimated:(BOOL)a0;
- (void)_updateLoadingStateAnimated:(BOOL)a0;
- (void)_updateErrorStateAnimated:(BOOL)a0;
- (void)_updateNoActivityStateAnimated:(BOOL)a0;
- (BOOL)shouldShortCircuitLoadingIndicator;
- (void)_updateStateAnimated:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)_errorStringDetailsForError:(id)a0;
- (void)_displayReachabilityMessageForEvent:(id)a0;
- (BOOL)_shouldShortCircuitBlurEffect;

@end
