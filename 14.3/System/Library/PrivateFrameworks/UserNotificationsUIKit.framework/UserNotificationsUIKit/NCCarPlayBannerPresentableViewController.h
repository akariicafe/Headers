@class UITapGestureRecognizer, NSString, NSUUID, NSHashTable, NCNotificationRequest, NCCarPlayBannerContentView, UIViewController;
@protocol NCCarPlayBannerPresentableViewControllerDelegate;

@interface NCCarPlayBannerPresentableViewController : UIViewController <NCCarPlayBannerContentViewDelegate, BNPresentable, BNPresentableObservable, BNPresentableUniquelyIdentifying> {
    NCCarPlayBannerContentView *_bannerContentView;
    NSHashTable *_observers;
    UITapGestureRecognizer *_contentSelectPressGesture;
}

@property (class, readonly, copy, nonatomic) NSString *requesterIdentifier;

@property (readonly, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCCarPlayBannerPresentableViewControllerDelegate> delegate;
@property (nonatomic) BOOL fillsContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (void)_wheelChangedWithEvent:(id)a0;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (id)_platterView;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)viewDidLoad;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (id)initWithNotificationRequest:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)presentableDescription;
- (BOOL)bn_shouldAnimateViewTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (void)invalidateDisplayProperties;
- (BOOL)bannerContentViewShouldShowOKButton:(id)a0;
- (void)updateRequestToInstance:(id)a0;
- (void)_handleTapOnContent:(id)a0;
- (void)_handleBackGesture:(id)a0;
- (void)_handleSwipeGesture:(id)a0;
- (void)addPresentableObserver:(id)a0;
- (void)removePresentableObserver:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;

@end
