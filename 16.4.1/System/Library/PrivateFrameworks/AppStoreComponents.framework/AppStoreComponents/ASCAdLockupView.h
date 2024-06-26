@class ASCAdLockupPresenter, ASCLockupMediaPresenter, ASCMaterialBackgroundView, ASCLockupContentView, UITapGestureRecognizer, UIViewController, ASCLockupMediaView, ASCLockup, ASCAdTransparencyContainerView, NSString, ASCOfferPresenter, ASCLockupPresenter, ASCLockupViewGroup, ASCLockupRequest, ASCGradientBackgroundView, ASCAppearMetricsPresenter;
@protocol ASCAdLockupViewDelegate;

@interface ASCAdLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver, ASCLockupMediaPresenterObserver, ASCAdLockupPresenterView, UIGestureRecognizerDelegate> {
    struct { unsigned char adLockupViewDidBeginRequest : 1; unsigned char adLockupViewDidFinishRequest : 1; unsigned char adLockupViewDidFailRequestWithError : 1; unsigned char adLockupViewAppStateDidChange : 1; unsigned char metricsActivityForPresentingProductDetailsOfAdLockupViewInState : 1; unsigned char metricsActivityForAdLockupViewToPerformActionOfOfferInState : 1; unsigned char adLockupViewDidInvalidateIntrinsicContentSize : 1; unsigned char adLockupViewDidPresentProductDetails : 1; unsigned char adLockupViewDidSelectOfferWithState : 1; unsigned char adLockupViewDidSelectAdMarker : 1; unsigned char adLockupViewDidBeginScreenshotsFetchRequest : 1; unsigned char adLockupViewDidCancelScreenshotsFetchRequest : 1; unsigned char adLockupViewDidFinishScreenshotsFetchRequest : 1; unsigned char adLockupViewPreprocessOfferInStateCompletionBlock : 1; unsigned char adLockupViewVideoStateDidChange : 1; } _delegateRespondsTo;
}

@property (readonly, nonatomic) NSString *accessibilityAdvertisement;
@property (readonly, nonatomic) NSString *accessibilityUserRating;
@property (readonly, nonatomic) ASCAdTransparencyContainerView *adTransparencyContainer;
@property (readonly, nonatomic) ASCLockupContentView *contentView;
@property (readonly, nonatomic) ASCLockupMediaView *mediaView;
@property (readonly, nonatomic) ASCMaterialBackgroundView *materialBackgroundView;
@property (readonly, nonatomic) ASCGradientBackgroundView *gradientBackgroundView;
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter;
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter;
@property (readonly, nonatomic) ASCLockupPresenter *lockupPresenter;
@property (readonly, nonatomic) ASCAdLockupPresenter *adLockupPresenter;
@property (readonly, nonatomic) ASCLockupMediaPresenter *lockupMediaPresenter;
@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) ASCLockup *lockup;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (weak, nonatomic) id<ASCAdLockupViewDelegate> delegate;
@property (nonatomic) BOOL automaticallyPresentsProductDetails;
@property (nonatomic, getter=isAdMarkerHidden) BOOL adMarkerHidden;
@property (nonatomic, getter=isVideoLoopingEnabled) BOOL videoLoopingEnabled;
@property (nonatomic, getter=isVideoMuted) BOOL videoMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)topContentViewSpacing;

- (id)accessibilityLabel;
- (void)encodeWithCoder:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHidden:(BOOL)a0;
- (void)layoutMarginsDidChange;
- (id)context;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidateIntrinsicContentSize;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryFooterViews;
- (void)presentProductDetailsViewController;
- (void)setOfferTheme:(id)a0;
- (void)setDeveloperName:(id)a0;
- (void)lockupPresenterDidFinishRequest;
- (id)appearMetricsActivity;
- (BOOL)automaticallyGeneratesAppearMetrics;
- (BOOL)isLargeSizeClass;
- (void)layoutAdContentView;
- (void)lockupMediaPresenterDidBeginScreenshotsFetchRequest;
- (void)lockupMediaPresenterDidCancelScreenshotsFetchRequest;
- (void)lockupMediaPresenterDidFinishScreenshotsFetchRequest;
- (void)lockupMediaPresenterVideoStateDidChange:(long long)a0;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFailRequestWithError:(id)a0;
- (id)metricsActivityForPresentingProductDetails;
- (id)metricsParametersForPresentingProductDetails;
- (id)metricsParametersFromMetricsActivity:(id)a0;
- (void)offerPresenterDidObserveChangeToState:(id)a0;
- (void)offerPresenterPreprocessOffer:(id)a0 inState:(id)a1 completionBlock:(id /* block */)a2;
- (void)offerPresenterWillPerformActionOfOffer:(id)a0 inState:(id)a1 withActivity:(inout id *)a2 inContext:(inout id *)a3;
- (id)offerTheme;
- (void)performAdTransparencyAction;
- (void)performLockupAction;
- (void)performOfferAction;
- (void)setAdTransparencyButtonHidden:(BOOL)a0;
- (void)setAppearMetricsActivity:(id)a0;
- (void)setAutomaticallyGeneratesAppearMetrics:(BOOL)a0;
- (void)updateLayoutMarginsForContext:(id)a0;
- (void)updateVisibility:(long long)a0;

@end
