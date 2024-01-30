@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSUserConsentViewController : OBWelcomeController <TSSetupFlowItem> {
    unsigned long long _consentType;
}

@property (nonatomic) unsigned long long userConsentResponse;
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
- (id)initWithConsentType:(unsigned long long)a0 name:(id)a1;
- (void)_acceptButtonTapped;
- (void)_declineButtonTapped;
- (void)_setNavigationItems;

@end
