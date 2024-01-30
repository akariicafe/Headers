@class SKUIOnboardingProgressView, NSString, SKUIResourceLoader, SKUIPhysicalCirclesTemplateViewElement, SKUIOnboardingFooterView, SKUIOnboardingAffiliationCirclesViewController, NSMapTable, UIGestureRecognizer;

@interface SKUIPhysicalCirclesDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIOnboardingAffiliationCirclesDelegate, SKUIPhysicalCirclesTemplateDelegate, UIGestureRecognizerDelegate, SKUIDocumentViewController> {
    SKUIOnboardingAffiliationCirclesViewController *_circlesViewController;
    SKUIOnboardingFooterView *_footerView;
    NSMapTable *_imageRequests;
    UIGestureRecognizer *_interactivePopGestureRecognizer;
    SKUIOnboardingProgressView *_progressView;
    SKUIResourceLoader *_resourceLoader;
    SKUIPhysicalCirclesTemplateViewElement *_templateElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)_affiliationItemsWithCircleItemElements:(id)a0;
- (void)_footerLeftButtonAction:(id)a0;
- (void)_footerRightButtonAction:(id)a0;
- (id)_leftFooterButtonElement;
- (void)_loadImagesWithReason:(long long)a0;
- (id)_profileImageElement;
- (void)_reloadFooterViewAnimated:(BOOL)a0;
- (void)_reloadInstructionsView;
- (id)_rightFooterButtonElement;
- (void)_styleAttributedString:(id)a0 withStyle:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)documentDidUpdate:(id)a0;
- (id)initWithPhysicalCirclesTemplateViewElement:(id)a0;
- (void)onboardingCircles:(id)a0 didRemoveAffiliationItem:(id)a1;
- (void)onboardingCircles:(id)a0 didSelectAffiliationItem:(id)a1 atIndex:(long long)a2;
- (void)physicalCirclesDOMFeature:(id)a0 didRequestAnimation:(id)a1;

@end
