@class NSString, CDPStateController, CDPContext, CDPUIController, UIViewController;

@interface CDPUIWalrusLocalPasscodeVerificationController : NSObject <CDPUIDelegate> {
    CDPContext *_context;
    CDPStateController *_stateController;
    NSString *_title;
    CDPUIController *_uiController;
    UIViewController *_viewController;
    unsigned long long _presentationType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setupControllers;
- (void)uiController:(id)a0 didPresentRootViewController:(id)a1;
- (void)uiController:(id)a0 prepareAlertContext:(id /* block */)a1;
- (void)uiController:(id)a0 preparePresentationContext:(id /* block */)a1;
- (void)finishWalrusLocalPasscodeVerificationWithCompletion:(id /* block */)a0;
- (id)initWithTitle:(id)a0 presentWithViewController:(id)a1 presentationType:(unsigned long long)a2;

@end
