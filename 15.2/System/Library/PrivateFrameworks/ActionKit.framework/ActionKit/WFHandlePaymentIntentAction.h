@class WFImage;

@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction {
    WFImage *_icon;
}

- (id)iconImage;
- (id)icon;
- (void).cxx_destruct;
- (id)showsWhenRunIfApplicable;
- (BOOL)opensInApp;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)errorFromResolutionResult:(id)a0 forSlot:(id)a1 onIntent:(id)a2;
- (id)errorFromConfirmResponse:(id)a0 intent:(id)a1;
- (id)errorFromHandleResponse:(id)a0 intent:(id)a1;
- (id)minimumSupportedClientVersion;
- (id)localizedKeyParameterDisplayName;
- (id)customAppNameForBundleIdentifier:(id)a0;
- (id)customImageForBundleIdentifier:(id)a0;
- (BOOL)selectedPaymentServiceIsApplePay;
- (id)noRecipientAccountError:(BOOL)a0;
- (id)credentialsUnverifiedError;
- (id)amountBelowMinimumErrorWithAmount:(id)a0 sending:(BOOL)a1;
- (id)amountAboveMaximumErrorWithAmount:(id)a0 sending:(BOOL)a1;
- (id)currencyUnsupportedErrorWithAmount:(id)a0;
- (id)noBankAccountError;
- (id)insufficientFundsError;
- (id)errorFromPaymentsResponse:(id)a0 intent:(id)a1;

@end
