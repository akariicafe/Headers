@class UIViewController, NSString, UIView, WFIntentPlatterViewController, WFAlert;
@protocol WFRemoteUserInterface;

@interface WFConcreteUIKitUserInterface : NSObject <WFIntentViewControllerDelegate, WFUIKitUserInterface, WFUIKitUserInterfaceImpl>

@property (weak, nonatomic) WFAlert *presentedAlert;
@property (weak, nonatomic) WFIntentPlatterViewController *intentViewController;
@property (copy, nonatomic) id /* block */ confirmationCompletionHandler;
@property (copy, nonatomic) id /* block */ handleCompletionHandler;
@property (retain, nonatomic) id<WFRemoteUserInterface> actionUserInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)presentAlert:(id)a0;
- (void)showHandleInteraction:(id)a0 prompt:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestActionInterfacePresentationForActionClassName:(id)a0 classNamesByType:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithView:(id)a0 viewController:(id)a1;
- (void)intentViewControllerWasTapped:(id)a0;
- (void)intentViewControllerDidConfirmIntent:(id)a0;
- (void)intentViewControllerDidDismissPlatter:(id)a0;
- (void)showConfirmInteraction:(id)a0 requireAuthentication:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)showPlatterWithInteraction:(id)a0 requiresConfirmation:(BOOL)a1;

@end
