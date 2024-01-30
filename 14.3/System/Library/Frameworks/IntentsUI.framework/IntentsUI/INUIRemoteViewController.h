@class INWidgetDescriptor, NSString, INUIExtensionRequestInfo, _INUIExtensionHostContext, NSExtension, INUIExtensionViewControllerConfiguration;
@protocol INUIRemoteViewControllerDelegate, NSCopying;

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate>

@property (retain, nonatomic) _INUIExtensionHostContext *extensionHostContext;
@property (retain, nonatomic) NSExtension *activeExtension;
@property (retain, nonatomic) id<NSCopying> currentRequestIdentifier;
@property (copy, nonatomic, setter=_setRequestInfo:) INUIExtensionRequestInfo *requestInfo;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (copy, nonatomic) INUIExtensionViewControllerConfiguration *configuration;
@property (nonatomic, getter=isWidgetHost) BOOL widgetHost;
@property (retain, nonatomic) INWidgetDescriptor *widgetDescriptor;
@property (weak, nonatomic) id<INUIRemoteViewControllerDelegate> delegate;
@property (nonatomic) BOOL needsStateUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)a0 delegate:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)requestRemoteViewControllerWithRequestInfo:(id)a0 reply:(id /* block */)a1;
+ (void)_requestRemoteViewControllerWithRequestInfo:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
+ (void)_getWidgetHostingRemoteViewControllerWithIntent:(id)a0 extensionMatchingError:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_getWidgetHostingRemoteViewControllerWithIntent:(id)a0 descriptor:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)a0 delegate:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)requestRemoteViewControllerForInteraction:(id)a0 delegate:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)a0 delegate:(id)a1 connectionHandler:(id /* block */)a2;

- (id)disconnect;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)configureForParameters:(id)a0 ofInteraction:(id)a1 interactiveBehavior:(unsigned long long)a2 context:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (void)desiresInteractivity:(id /* block */)a0;
- (void)configureWithInteraction:(id)a0 context:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)extensionHostContext:(id)a0 wantsToHandleIntent:(id)a1;
- (void)extensionHostContextWillBeginEditing:(id)a0;
- (void)setDelegate:(id)a0 completion:(id /* block */)a1;
- (void)setIdealConfiguration:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestCancellation;
- (void)_queryRepresentedPropertiesWithCompletion:(id /* block */)a0;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_updateExtensionContextStateWithCompletion:(id /* block */)a0;
- (void)configureWithInteraction:(id)a0 context:(unsigned long long)a1 errorHandlingCompletion:(id /* block */)a2;

@end
