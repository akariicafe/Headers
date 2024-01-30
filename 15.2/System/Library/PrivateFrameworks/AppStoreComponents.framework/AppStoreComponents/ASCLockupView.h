@class ASCLockupPresenter, NSString, ASCMetricsActivity, ASCOfferPresenter, ASCLockup, ASCLockupViewGroup, ASCAppearMetricsPresenter, ASCLockupRequest, UIViewController, ASCLockupContentView, ASCOfferTheme;
@protocol ASCLockupViewDelegate;

@interface ASCLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver> {
    struct { unsigned char lockupViewDidBeginRequest : 1; unsigned char lockupViewDidFinishRequest : 1; unsigned char lockupViewDidFailRequestWithError : 1; unsigned char lockupViewAppStateDidChange : 1; unsigned char metricsActivityForAdLockupViewToPerformActionOfOfferInState : 1; unsigned char lockupViewDidInvalidateIntrinsicContentSize : 1; } _delegateRespondsTo;
}

@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (readonly, nonatomic) ASCLockupContentView *contentView;
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter;
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter;
@property (readonly, nonatomic) ASCLockupPresenter *lockupPresenter;
@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL automaticallyGeneratesAppearMetrics;
@property (copy, nonatomic) ASCMetricsActivity *appearMetricsActivity;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (retain, nonatomic) NSString *size;
@property (copy, nonatomic) ASCLockup *lockup;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (weak, nonatomic) id<ASCLockupViewDelegate> delegate;
@property (nonatomic) BOOL automaticallyPresentsProductDetails;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL showsPlaceholderContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void)layoutContentView;
- (void)encodeWithCoder:(id)a0;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void)setHidden:(BOOL)a0;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)initWithCoder:(id)a0;
- (id)accessibilityLabel;
- (void)didMoveToWindow;
- (id)_accessibilitySupplementaryFooterViews;
- (void)presentProductDetailsViewController;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidFailRequestWithError:(id)a0;
- (void)setViewRenderSpanProvider:(id /* block */)a0;
- (void)performLockupAction;
- (void)offerPresenterDidObserveChangeToState:(id)a0;
- (void)offerPresenterWillPerformActionOfOffer:(id)a0 inState:(id)a1 withActivity:(inout id *)a2;

@end
