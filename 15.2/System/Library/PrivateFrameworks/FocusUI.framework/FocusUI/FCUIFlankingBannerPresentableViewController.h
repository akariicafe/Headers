@class _FCUIBannerDeactivateControl, NSString, NSHashTable, UIViewController;
@protocol FCActivityDescribing, BNPresentableContext;

@interface FCUIFlankingBannerPresentableViewController : UIViewController <BNPresentable, BNPresentableObservable> {
    _FCUIBannerDeactivateControl *_deactivateButton;
    NSHashTable *_observers;
}

@property (readonly, copy, nonatomic) id<FCActivityDescribing> activityDescription;
@property (readonly, nonatomic, getter=isActivityEnabled) BOOL activityEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentableWillAppearAsBanner:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)viewDidLoad;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)presentableDidAppearAsBanner:(id)a0;
- (id)presentableDescription;
- (void)addPresentableObserver:(id)a0;
- (void)removePresentableObserver:(id)a0;
- (void)_configureDeactivateButtonIfNecessary;
- (id)initWithActivityDescription:(id)a0 requesterIdentifier:(id)a1 enabled:(BOOL)a2;
- (void)addActionForInfoEvent:(id)a0;
- (id)_pillViewIfLoaded;

@end
