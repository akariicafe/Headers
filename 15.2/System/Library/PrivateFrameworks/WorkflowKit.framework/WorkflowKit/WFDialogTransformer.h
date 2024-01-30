@class WFDialogAttributions, NSDate, NSArray, NSString, WFUIPresenter, WFAction, WFSequentialParameterInputProvider, WFWorkflow, WFWorkflowController;

@interface WFDialogTransformer : NSObject <WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost, WFActionParameterInputProvider>

@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFSequentialParameterInputProvider *parameterInputProvider;
@property (copy, nonatomic) id /* block */ parameterInputCompletionHandler;
@property (retain, nonatomic) NSDate *workflowStartTime;
@property (retain, nonatomic) WFAction *currentAction;
@property (weak, nonatomic) WFWorkflowController *workflowController;
@property (retain, nonatomic) WFUIPresenter *userInterfacePresenter;
@property (readonly, nonatomic) WFDialogAttributions *attributions;
@property (retain, nonatomic) NSArray *allowedParameterClasses;
@property (nonatomic) long long numberOfDialogsPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)associatedAppBundleIdentifier;
- (void)presentAlert:(id)a0;
- (void)showDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)attributionTitle;
- (void)showHandleInteraction:(id)a0 prompt:(id)a1 completionHandler:(id /* block */)a2;
- (void)showConfirmInteraction:(id)a0 prompt:(id)a1 requireAuthentication:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)showPreviewForContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestActionInterfacePresentationForActionClassName:(id)a0 classNamesByType:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestAuthorizationWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestFileAccessForURLs:(id)a0 workflowName:(id)a1 workflowID:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)shouldNotHandoff;
- (id)dialogTransformer;
- (BOOL)openURL:(id)a0 withBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)resolveDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (void)action:(id)a0 provideInputForParameters:(id)a1 withDefaultStates:(id)a2 prompts:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)action:(id)a0 canProvideInputForParameter:(id)a1;
- (id)workflowName;
- (id)attributionIcon;
- (void)sequentialParameterInputProvider:(id)a0 didAdvanceToParameter:(id)a1 action:(id)a2 defaultState:(id)a3 prompt:(id)a4 completion:(id /* block */)a5;
- (void)sequentialParameterInputProvider:(id)a0 didFinishWithInputtedStates:(id)a1;
- (void)sequentialParameterInputProviderDidCancel:(id)a0;
- (id)initWithWorkflow:(id)a0 userInterfacePresenter:(id)a1;
- (id)initWithWorkflow:(id)a0 userInterfacePresenter:(id)a1 userInterfaceType:(id)a2;
- (void)workflowWillBegin;
- (id)actionForAttribution;
- (id)attributionIconImage;
- (id)attributionForMode:(unsigned long long)a0;
- (void)handleSimpleAlert:(id)a0;
- (void)handleAlertWithTextField:(id)a0;
- (void)handleAlertWithDatePicker:(id)a0;
- (void)handleAlertWithMultipleButtons:(id)a0;
- (BOOL)usesModalComponentStyleWhenAskingForParameter:(id)a0;
- (void)showAskParameterDialogForParameter:(id)a0 action:(id)a1 defaultState:(id)a2 prompt:(id)a3 completion:(id /* block */)a4;

@end
