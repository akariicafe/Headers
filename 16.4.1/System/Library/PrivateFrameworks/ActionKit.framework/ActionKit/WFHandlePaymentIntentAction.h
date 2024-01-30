@class WFImage;

@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction {
    WFImage *_icon;
}

- (id)icon;
- (void).cxx_destruct;
- (id)customImageForBundleIdentifier:(id)a0;
- (id)errorFromHandleResponse:(id)a0 intent:(id)a1;
- (id)actionForAppIdentifier:(id)a0;
- (id)customAppNameForBundleIdentifier:(id)a0;
- (id)errorFromConfirmResponse:(id)a0 intent:(id)a1;
- (id)errorFromResolutionResult:(id)a0 forSlot:(id)a1 onIntent:(id)a2;
- (id)localizedKeyParameterDisplayName;
- (id)minimumSupportedClientVersion;
- (BOOL)opensInApp;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)showsWhenRunIfApplicable;
- (id)amountAboveMaximumErrorWithAmount:(id)a0 sending:(BOOL)a1;
- (id)amountBelowMinimumErrorWithAmount:(id)a0 sending:(BOOL)a1;
- (id)credentialsUnverifiedError;
- (id)currencyUnsupportedErrorWithAmount:(id)a0;
- (id)errorFromPaymentsResponse:(id)a0 intent:(id)a1;
- (id)insufficientFundsError;
- (id)noBankAccountError;
- (id)noRecipientAccountError:(BOOL)a0;
- (BOOL)selectedPaymentServiceIsApplePay;

@end
