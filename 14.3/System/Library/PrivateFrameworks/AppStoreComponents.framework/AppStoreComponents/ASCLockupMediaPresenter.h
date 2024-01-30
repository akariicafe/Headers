@class ASCLockup, ASCPresenterContext, ASCPendingPromises;
@protocol ASCLockupMediaPresenterView;

@interface ASCLockupMediaPresenter : NSObject

@property (readonly, nonatomic) id<ASCLockupMediaPresenterView> view;
@property (readonly, nonatomic) ASCPresenterContext *context;
@property (copy, nonatomic) ASCLockup *lockup;
@property (readonly, nonatomic) ASCPendingPromises *pendingArtworkPromises;

+ (id)log;

- (void).cxx_destruct;
- (void)dealloc;
- (void)performFollowUpWork:(id /* block */)a0;
- (id)initWithView:(id)a0 lockupPresenter:(id)a1;
- (void)lockupPresenterDidChange:(id)a0;
- (id)initWithView:(id)a0 lockupPresenter:(id)a1 context:(id)a2;
- (unsigned long long)numberOfMediaViewsForLockup:(id)a0;
- (id)videoViewForLockup:(id)a0;
- (void)performScreenshotsFetch;
- (id)artworkForLockup:(id)a0;
- (void)screenshotArtwork:(id)a0 didFetchImage:(id)a1 atIndex:(long long)a2;
- (void)screenshotArtwork:(id)a0 didFailFetchWithError:(id)a1 atIndex:(unsigned long long)a2;

@end
