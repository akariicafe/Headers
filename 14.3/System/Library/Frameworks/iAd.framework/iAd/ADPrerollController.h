@class NSString, ADPrerollView, ADPlayer, MPMoviePlayerController;

@interface ADPrerollController : NSObject <ADPrerollViewDelegate, ADPlayerDelegate>

@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) MPMoviePlayerController *moviePlayerController;
@property (retain, nonatomic) ADPrerollView *view;
@property (retain, nonatomic) ADPlayer *adPlayer;
@property (nonatomic) BOOL setupInProgress;
@property (nonatomic) BOOL isObservingThirdPartyAVPlayer;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doneButtonPressed;
- (BOOL)_isEmbedded;
- (id)_advertisementView;
- (id)initWithMoviePlayerController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_appWillResignActive;
- (BOOL)_beginPlayback;
- (void)_addAccessibilityIdentifier:(id)a0;
- (BOOL)prerollViewRequestsEmbeddedStatus;
- (void)playButtonPressed;
- (void)pauseButtonPressed;
- (void)skipButtonPressed;
- (void)actionButtonPressed;
- (void)privacyButtonPressed;
- (void)adPlayerDidTimeout:(id)a0;
- (void)adPlayerFailedToLoadAsset:(id)a0;
- (void)adPlayerFailedToPlayWithUnknownError:(id)a0;
- (void)adPlayer:(id)a0 readyForPlaybackWithAVPlayer:(id)a1 impressionProperties:(id)a2;
- (void)adPlayer:(id)a0 elapsedTime:(double)a1 totalTime:(double)a2;
- (void)adPlayerDidFinishPlayback:(id)a0;
- (id)viewControllerForActionFromAdPlayer:(id)a0;
- (void)adPlayer:(id)a0 didChangePlaybackState:(unsigned long long)a1;
- (void)playPrerollAdWithCompletion:(id /* block */)a0;
- (void)adPlayerDidBeginAction:(id)a0;
- (void)_handlePlaybackCompletion:(BOOL)a0;

@end
