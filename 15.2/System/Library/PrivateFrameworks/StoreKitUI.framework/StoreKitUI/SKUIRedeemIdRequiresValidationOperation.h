@class NSString, SKUIRedeemViewControllerLegacy;

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate>

@property (copy) id /* block */ resultBlock;
@property (weak, nonatomic) SKUIRedeemViewControllerLegacy *redeemViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_authenticationContext;
- (void)main;
- (void).cxx_destruct;
- (BOOL)_performAuthentication;
- (void)operation:(id)a0 selectedButton:(id)a1;
- (id)_subOperationWithBagKey:(id)a0;
- (void)_logResultsForSuccess:(BOOL)a0 shouldVerify:(BOOL)a1 failureReason:(id)a2 error:(id)a3;

@end
