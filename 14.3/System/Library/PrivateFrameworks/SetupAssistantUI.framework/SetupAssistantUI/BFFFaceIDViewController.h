@class BuddySuspendTask, NSString, OBAnimationController, BuddyInternalSkipInfoProvider, OBPrivacyLinkController, UIView, BKUIPearlEnrollControllerPreloadedState;
@protocol BYDeviceProvider, BFFFaceIDViewControllerDelegate;

@interface BFFFaceIDViewController : OBWelcomeController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver> {
    BKUIPearlEnrollControllerPreloadedState *_preloadedState;
}

@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (nonatomic) BOOL shouldShowWallet;
@property (retain, nonatomic) UIView *iconContainer;
@property (retain, nonatomic) OBAnimationController *animationController;
@property (nonatomic) BOOL completesOnCancel;
@property (readonly, nonatomic) BOOL inDemo;
@property (retain, nonatomic) id<BYDeviceProvider> deviceProvider;
@property (weak, nonatomic) id<BFFFaceIDViewControllerDelegate> faceIDViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BuddyInternalSkipInfoProvider *internalSkipInfoProvider;
@property (retain, nonatomic) BuddySuspendTask *suspendTask;

- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (BOOL)_sheetMode;
- (void)pearlEnrollController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)_userDidTapCancelButton:(id)a0;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (void)resetColorsAnimated:(BOOL)a0;
- (id)initInDemo:(BOOL)a0;
- (void)willStartOver;

@end
