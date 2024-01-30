@class NSString, UIViewController, INInteraction;
@protocol INUIHostedViewControlling;

@interface _INUIServiceViewController : UIViewController <_INUIRemoteViewControllerServing> {
    UIViewController<INUIHostedViewControlling> *_hostedViewController;
    INInteraction *_currentInteraction;
    unsigned long long _currentContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (BOOL)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)addChildViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)configureForParameters:(id)a0 ofInteraction:(id)a1 interactiveBehavior:(unsigned long long)a2 context:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)viewWasCancelled;
- (void)desiresInteractivity:(id /* block */)a0;
- (void)queryRepresentedPropertiesWithCompletion:(id /* block */)a0;
- (id)_errorHandlingRemoteViewControllerProxy;
- (struct CGSize { double x0; double x1; })_constrainedSizeForDesiredSize:(struct CGSize { double x0; double x1; })a0;

@end
