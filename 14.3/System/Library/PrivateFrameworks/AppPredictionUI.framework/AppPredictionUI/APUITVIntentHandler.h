@class NSString, ATXAction, APUIWFLIntentController;

@interface APUITVIntentHandler : NSObject <APUIWFLIntentControllerDelegate, ATXTVIntentHandler> {
    ATXAction *_action;
    APUIWFLIntentController *_intentController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)intentController:(id)a0 didHandleInteraction:(id)a1;
- (void)intentController:(id)a0 didFailWithError:(id)a1 forInteraction:(id)a2;
- (void)intentController:(id)a0 requiresContinuingInAppForIntent:(id)a1 proceedHandler:(id /* block */)a2;
- (void)intentController:(id)a0 requiresConfirmationForIntent:(id)a1 intentResponse:(id)a2;
- (void)intentControllerDidFailAuthorizationCheck:(id)a0;
- (id)initWithTVAction:(id)a0 context:(long long)a1;
- (void)executeTVActionWithCompletion:(id /* block */)a0;
- (void)_punchToAppWithIntent:(id)a0;

@end
