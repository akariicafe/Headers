@class ASCPendingPromises, NSString, ASCLockup, ASCPresenterContext;
@protocol ASCLockupMediaPresenterBackgroundView, ASCLockupMediaPresenterView, ASCLockupMediaPresenterObserver;

@interface ASCLockupMediaPresenter : NSObject <ASCVideoViewDelegate>

@property (readonly, nonatomic) id<ASCLockupMediaPresenterView> view;
@property (readonly, nonatomic) ASCPresenterContext *context;
@property (copy, nonatomic) ASCLockup *lockup;
@property (readonly, nonatomic) ASCPendingPromises *pendingArtworkPromises;
@property (weak, nonatomic) id<ASCLockupMediaPresenterObserver> observer;
@property (weak, nonatomic) id<ASCLockupMediaPresenterBackgroundView> backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)artworkForLockup:(id)a0;
- (id)initWithView:(id)a0 lockupPresenter:(id)a1;
- (id)initWithView:(id)a0 lockupPresenter:(id)a1 context:(id)a2;
- (void)lockupPresenterDidChange:(id)a0;
- (void)performFollowUpWork:(id /* block */)a0;
- (void)performScreenshotsFetch;
- (void)screenshotArtwork:(id)a0 didFailFetchWithError:(id)a1 atIndex:(unsigned long long)a2;
- (void)screenshotArtwork:(id)a0 didFetchImage:(id)a1 atIndex:(long long)a2;
- (void)videoView:(id)a0 videoStateDidChange:(long long)a1;
- (id)videoViewForLockup:(id)a0;

@end
