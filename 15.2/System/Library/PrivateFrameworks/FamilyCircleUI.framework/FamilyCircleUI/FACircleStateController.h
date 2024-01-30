@class FARequestConfigurator, NSString, RUIStyle, UIViewController;

@interface FACircleStateController : NSObject <FARemoteViewControllerDelegate, FACirclePresenterDelegate> {
    FARequestConfigurator *_requestConfigurator;
    id /* block */ _performOperationCompletion;
}

@property (nonatomic) BOOL requiresInProcessPresentation;
@property (weak, nonatomic) UIViewController *presenter;
@property (copy, nonatomic) id /* block */ presentationHandler;
@property (retain, nonatomic) RUIStyle *customRUIStyle;
@property (nonatomic) long long modalPresentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPresenter:(id)a0;
- (void)dealloc;
- (void)performWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performOperationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_performOperationWithContext:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (BOOL)_contextRequiresRemoteService:(id)a0;
- (BOOL)_processRequiresSpringBoardServices;
- (void)_presentFlowUsingSpringBoardWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_presentViewServiceWithContext:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void)_ensurePresenterWithCompletion:(id /* block */)a0;
- (id)_whitelistedInProcessClients;
- (void)remoteViewControllerDidStartFlow:(id)a0;
- (void)circlePresenterDidPresent:(id)a0;

@end
