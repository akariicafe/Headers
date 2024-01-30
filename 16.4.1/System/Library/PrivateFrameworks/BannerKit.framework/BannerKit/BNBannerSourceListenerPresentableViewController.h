@class NSUUID, NSString, NSHashTable, BSServiceConnectionListener, UIView, FBScene, BSServiceConnection, NSObject, UIViewController;
@protocol OS_dispatch_queue, BSServiceConnectionHost, BNPresentableContext, BNBannerSourceListenerPresentableDelegate, BNPresentable;

@interface BNBannerSourceListenerPresentableViewController : UIViewController <BNBannerSourceListenerPresentableViewControllerViewDelegate, BNPresentableContextClientToHostInterface, BSServiceConnectionListenerDelegate, BNPresentableContext, BNBannerSourceListenerPresentable> {
    NSHashTable *_observers;
    id /* block */ _readyCompletion;
    NSString *_serviceDomain;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
}

@property (retain, nonatomic, setter=_setContentView:) UIView *contentView;
@property (copy, nonatomic, setter=_setReadyCompletion:) id /* block */ readyCompletion;
@property (readonly, nonatomic, getter=_isPresentableContextInterfaceAvailable) BOOL presentableContextInterfaceAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long contentBehavior;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<BNPresentable> presentable;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) int bannerAppearState;
@property (weak, nonatomic) id<BNBannerSourceListenerPresentableDelegate> delegate;
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)presentableWillNotAppearAsBanner:(id)a0 withReason:(id)a1;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)invalidate;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)presentableDescription;
- (void)bannerSourceListenerPresentableViewControllerViewDidChangeSize:(id)a0;
- (void)__setDraggingDismissalEnabled:(id)a0 error:(out id *)a1;
- (void)__setDraggingInteractionEnabled:(id)a0 error:(out id *)a1;
- (void)__setTouchOutsideDismissalEnabled:(id)a0 error:(out id *)a1;
- (id)_initWithWithPresentableIdentification:(id)a0 presentableBehavior:(long long)a1 contentBehavior:(long long)a2 serviceDomain:(id)a3 readyCompletion:(id /* block */)a4;
- (void)_setBannerAppearState:(int)a0 forPresentable:(id)a1 reason:(id)a2;
- (void)_setUserInteractionWillBegin:(BOOL)a0 forPresentable:(id)a1;
- (void)addPresentableObserver:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForBannerSourceListenerPresentableViewControllerView:(id)a0;
- (void)handleTemplateContentEvent:(long long)a0;
- (id)initWithWithPresentable:(id)a0;
- (id)initWithWithSpecification:(id)a0 serviceDomain:(id)a1 readyCompletion:(id /* block */)a2;
- (void)makeReadyIfPossible;
- (void)removePresentableObserver:(id)a0;
- (void)setHostNeedsUpdate;

@end
