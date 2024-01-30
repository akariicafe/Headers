@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSUserConsentPadViewController : BFFSplashController <UINavigationControllerDelegate, TSSetupFlowItem> {
    BOOL _didReceiveResponse;
    NSString *_confirmationCode;
    BOOL _requireAdditionalConsent;
}

@property (readonly, nonatomic) unsigned long long consentType;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)calculateTitleAndDetailsWithName:(id)a0 consentType:(unsigned long long)a1 title:(id *)a2 details:(id *)a3;

- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)viewDidLoad;
- (id)initWithName:(id)a0 consentType:(unsigned long long)a1 requireAdditionalConsent:(BOOL)a2;
- (id)initWithConfirmationCode:(id)a0 consentType:(unsigned long long)a1 requireAdditionalConsent:(BOOL)a2 confirmationCode:(id)a3;
- (void)_acceptButtonTapped;
- (void)_declineButtonTapped;
- (void)_setNavigationItems;

@end
