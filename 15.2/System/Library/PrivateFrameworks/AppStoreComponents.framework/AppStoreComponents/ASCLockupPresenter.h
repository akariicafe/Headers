@class ASCSignpostSpan, ASCOfferPresenter, ASCLockupViewGroup, ASCPresenterContext, ASCAppearMetricsPresenter, ASCLockupRequest, AMSPromise, ASCLockup;
@protocol ASCLockupPresenterView, ASCLockupPresenterObserver;

@interface ASCLockupPresenter : NSObject

@property (readonly, weak, nonatomic) id<ASCLockupPresenterView> view;
@property (readonly, nonatomic) ASCPresenterContext *context;
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter;
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter;
@property (retain, nonatomic) AMSPromise *pendingRequestedLockup;
@property (retain, nonatomic) ASCSignpostSpan *pendingViewRender;
@property (readonly, nonatomic) BOOL prefersRightToLeftViewLayout;
@property (nonatomic) BOOL showsPlaceholderContent;
@property (weak, nonatomic) id<ASCLockupPresenterObserver> observer;
@property (copy, nonatomic) ASCLockup *lockup;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (copy, nonatomic) id /* block */ viewRenderSpanProvider;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearContent;
- (void)daemonDidRebootstrap:(id)a0;
- (id)initWithView:(id)a0 offerPresenter:(id)a1 metricsPresenter:(id)a2 context:(id)a3;
- (void)performIconFetch;
- (void)reloadDefaultContent;
- (void)retryGroup:(id)a0;
- (void)performLockupFetch;
- (void)showPlaceholderContent;
- (void)requestWillFetchLockup:(id)a0;
- (void)request:(id)a0 didCompleteWithLockup:(id)a1;
- (void)endViewRender;
- (void)iconArtwork:(id)a0 didFetchImage:(id)a1;
- (void)iconArtwork:(id)a0 didFailFetchWithError:(id)a1;
- (void)beginViewRender;
- (void)performFollowUpWork:(id /* block */)a0;
- (id)initWithView:(id)a0 offerPresenter:(id)a1 metricsPresenter:(id)a2;
- (BOOL)retryRequestIfNeeded;

@end
