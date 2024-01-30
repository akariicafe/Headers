@class NSDate, NSString, NSArray, WFWorkflowReference, WFAction, WFDialogAttribution, WFSequentialParameterInputProvider, WFWorkflowController;
@protocol WFDialogPresenter;

@interface WFDialogTransformer : NSObject <WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost, WFActionParameterInputProvider>

@property (retain, nonatomic) WFSequentialParameterInputProvider *parameterInputProvider;
@property (copy, nonatomic) id /* block */ parameterInputCompletionHandler;
@property (retain, nonatomic) NSDate *workflowStartTime;
@property (retain, nonatomic) WFWorkflowReference *workflow;
@property (retain, nonatomic) WFAction *currentAction;
@property (weak, nonatomic) WFWorkflowController *workflowController;
@property (retain, nonatomic) id<WFDialogPresenter> dialogPresenter;
@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (retain, nonatomic) NSArray *allowedParameterClasses;
@property (nonatomic) long long numberOfDialogsPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)cancel;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)presentAlert:(id)a0;
- (void)showDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)showHandleInteraction:(id)a0 prompt:(id)a1 completionHandler:(id /* block */)a2;
- (void)showConfirmInteraction:(id)a0 prompt:(id)a1 requireAuthentication:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)showPreviewForContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestActionInterfacePresentationForActionClassName:(id)a0 classNamesByType:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldNotHandoff;
- (id)dialogTransformer;
- (BOOL)openURL:(id)a0 withBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)action:(id)a0 provideInputForParameters:(id)a1 withDefaultStates:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)action:(id)a0 canProvideInputForParameter:(id)a1;
- (void)sequentialParameterInputProvider:(id)a0 didAdvanceToParameter:(id)a1 action:(id)a2 defaultState:(id)a3 completion:(id /* block */)a4;
- (void)sequentialParameterInputProvider:(id)a0 didFinishWithInputtedStates:(id)a1;
- (void)sequentialParameterInputProviderDidCancel:(id)a0;
- (id)initWithWorkflow:(id)a0 dialogPresenter:(id)a1;
- (id)initWithWorkflow:(id)a0 dialogPresenter:(id)a1 userInterfaceType:(id)a2;
- (void)workflowWillBegin;
- (id)actionForAttribution;
- (id)attributionForMode:(unsigned long long)a0;
- (void)handleSimpleAlert:(id)a0;
- (void)handleAlertWithTextField:(id)a0;
- (void)handleAlertWithDatePicker:(id)a0;
- (void)handleAlertWithMultipleButtons:(id)a0;
- (BOOL)usesModalComponentStyleWhenAskingForParameter:(id)a0;
- (void)showAskParameterDialogForParameter:(id)a0 action:(id)a1 defaultState:(id)a2 completion:(id /* block */)a3;

@end
