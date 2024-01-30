@class PKPaymentPass, PKAccountUser, PKPhysicalCard, NSString, PKAccountService, PKAccount;
@protocol PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;

@interface PKPhysicalCardController : NSObject <PKSetupFlowControllerProtocol> {
    PKAccountService *_accountService;
    BOOL _updatingOrderController;
}

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUser *accountUser;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) id<PKSetupFlowControllerProtocol> parentFlowController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) BOOL hasPrimaryPhysicalCard;
@property (readonly, nonatomic) BOOL canActivatePhysicalCard;
@property (readonly, nonatomic) BOOL canRequestPhysicalCard;
@property (readonly, nonatomic) BOOL canReplacePhysicalCard;
@property (readonly, nonatomic) BOOL primaryPhysicalCardEnabled;
@property (readonly, nonatomic) BOOL physicalCardBlocked;
@property (readonly, nonatomic) PKPhysicalCard *unactivatedPhysicalCard;
@property (readonly, nonatomic) PKPhysicalCard *primaryPhysicalCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsContactlessActivation;

- (void).cxx_destruct;
- (void)dealloc;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (id)initWithAccountService:(id)a0 paymentPass:(id)a1 account:(id)a2 accountUser:(id)a3;
- (void)_updatePhysicalCards;
- (BOOL)_userSupportsActivatingPhysicalCard;
- (BOOL)_userSupportsRequestingPhysicalCard;
- (void)updateWithAccount:(id)a0;
- (void)orderFlowViewControllerForReason:(unsigned long long)a0 content:(long long)a1 completion:(id /* block */)a2;

@end
