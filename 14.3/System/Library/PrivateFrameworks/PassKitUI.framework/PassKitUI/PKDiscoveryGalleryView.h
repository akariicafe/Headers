@class NSString, NSArray, UIImage, PKDiscoveryCardView, PKDiscoveryDataSource, NSMutableArray, UIPageControl, UIScrollView;
@protocol PKPGSVSectionSubheaderDelegate;

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView> {
    NSMutableArray *_cardViews;
    NSArray *_displayedCardViews;
    NSMutableArray *_discoveryCardViews;
    id<PKPGSVSectionSubheaderDelegate> _subheaderDelegate;
    PKDiscoveryCardView *_passWelcomeView;
    PKDiscoveryCardView *_paymentWelcomeView;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    UIImage *_dismissImage;
    BOOL _needsUpdateAsHeaderSubview;
    unsigned long long _pendingDeletes;
    struct { unsigned char hasPaymentPassWelcomeCard : 1; unsigned char hasBarcodePassWelcomeCard : 1; unsigned char barcodePassWelcomeCardIsDismissable : 1; unsigned char hasDiscoveryCards : 1; } _layoutState;
    BOOL _welcomeCardStateIsDirty;
    NSString *_lastReportedDiscoveryItemIdentifier;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundState;
    double _lastTimeForegroundActive;
    BOOL _articleLayoutsUpdatedAfterEnteringForegroundActive;
}

@property (readonly, weak, nonatomic) PKDiscoveryCardView *pressedDiscoveryCardView;
@property (nonatomic, getter=isAnimatingCard) BOOL animatingCard;
@property (retain, nonatomic) PKDiscoveryDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)passWelcomeCardMessageAttributedString;
+ (BOOL)paymentWelcomeCardIsAvailable;
+ (BOOL)isVisibileForPKPGSVLayoutState:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; })a0 dataSource:(id)a1;

- (struct CGSize { double x0; double x1; })_contentSize;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)discoveryCardViewCTATapped:(id)a0 callToAction:(id)a1;
- (void)dealloc;
- (void)updatePageControlFrame;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (BOOL)_requestDismissalIfNecessaryAfterLayoutStateUpdate;
- (void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)a0 overrideFrontmostCardToIdentifier:(id)a1 animated:(BOOL)a2;
- (void)_updateCardViewsAnimated:(BOOL)a0;
- (unsigned long long)_indexForCardViewWithIdentifier:(id)a0;
- (void)_updateCardViews;
- (void)_appStorePressed;
- (void)_pageControlChanged:(id)a0;
- (void)_updateCardViewsAnimated:(BOOL)a0 overrideFrontmostCardToIdentifier:(id)a1;
- (void)_updateScrollViewToCardIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_reportCurrentDiscoveryCardToDiscoveryService;
- (id)_createPaymentWelcomeCardView;
- (id)_createPassWelcomeCardView;
- (void)_removeCardView:(id)a0 animated:(BOOL)a1;
- (void)_scanCodePressed;
- (void)layoutSubviews;
- (void)updateForPKPGSVLayoutState:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; })a0;
- (void)setSubheaderDelegate:(id)a0;
- (void)updateArticleLayouts:(id)a0;
- (id)cardViewForCardWithItemIdentifier:(id)a0;
- (void)discoveryCardViewTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updatePageControlVisibilityWithDelay:(double)a0;
- (void)discoveryCardViewRemoveTapped:(id)a0;
- (double)_defaultHeight;
- (void)_updatePageControlWithDisplayIndex;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)displayIndex;

@end
