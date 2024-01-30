@class ASCAdLockupPresenter, ASCAdLockupContentView, AVPlayer, UIViewController, ASCLockupMediaView, ASCLockup, NSString, ASCLockupPresenter, ASCOfferPresenter, ASCLockupViewGroup, ASCLockupRequest, ASCLockupMediaPresenter, ASCAppearMetricsPresenter;
@protocol ASCAdLockupViewDelegate;

@interface ASCAdLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver> {
    struct { unsigned char adLockupViewDidBeginRequest : 1; unsigned char adLockupViewDidFinishRequest : 1; unsigned char adLockupViewDidFailRequestWithError : 1; unsigned char adLockupViewAppStateDidChange : 1; unsigned char metricsActivityForLockupViewToPerformActionOfOffer : 1; unsigned char adLockupViewDidInvalidateIntrinsicContentSize : 1; unsigned char adLockupViewDidPresentProductDetails : 1; unsigned char adLockupViewDidSelectOfferWithState : 1; unsigned char adLockupViewDidSelectAdMarker : 1; } _delegateRespondsTo;
}

@property (readonly, nonatomic) ASCAdLockupContentView *adContentView;
@property (readonly, nonatomic) ASCLockupMediaView *mediaView;
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter;
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter;
@property (readonly, nonatomic) ASCLockupPresenter *lockupPresenter;
@property (readonly, nonatomic) ASCAdLockupPresenter *adLockupPresenter;
@property (readonly, nonatomic) ASCLockupMediaPresenter *lockupMediaPresenter;
@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) ASCLockup *lockup;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (weak, nonatomic) id<ASCAdLockupViewDelegate> delegate;
@property (nonatomic) BOOL automaticallyPresentsProductDetails;
@property (nonatomic, getter=isAdMarkerHidden) BOOL adMarkerHidden;
@property (readonly, nonatomic) AVPlayer *videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)setHidden:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOfferTheme:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)presentProductDetailsViewController;
- (void)encodeWithCoder:(id)a0;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidFailRequestWithError:(id)a0;
- (void)performAdTransparencyAction;
- (void)performLockupAction;
- (id)offerTheme;
- (void)layoutAdContentView;
- (void)offerPresenterDidObserveChangeToState:(id)a0;
- (void)offerPresenterWillPerformActionOfOffer:(id)a0 inState:(id)a1 withActivity:(inout id *)a2;
- (BOOL)automaticallyGeneratesAppearMetrics;
- (void)setAutomaticallyGeneratesAppearMetrics:(BOOL)a0;
- (id)appearMetricsActivity;
- (void)setAppearMetricsActivity:(id)a0;

@end
