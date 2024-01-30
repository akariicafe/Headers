@class NSString, FACircleContext, NSXPCConnection;

@interface FARemoteServiceViewController : UIViewController <FARemoteServiceProtocol, RUIPresentationHandling> {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
    BOOL _isFlowStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)_showFamilyFlow;
- (void)_dismissAndExit;
- (void)_main_dismissAndExit;
- (void)startFlowWithContext:(id)a0;
- (void)_presentAsChildViewController:(id)a0;
- (void)presentModalRUIController:(id)a0 completion:(id /* block */)a1;
- (void)replaceModalRUIController:(id)a0 byController:(id)a1 completion:(id /* block */)a2;
- (void)dismissModalRUIController:(id)a0 completion:(id /* block */)a1;
- (void)ruiPresentAlertController:(id)a0;
- (void)ruiDidDismissAlertController:(id)a0;

@end
