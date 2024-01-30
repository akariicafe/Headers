@class NPKPaymentProvisioningFlowControllerRequestContext, NSString;

@interface NPKPaymentProvisioningFlowStepContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NPKPaymentProvisioningFlowControllerRequestContext *requestContext;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) NSString *backStepIdentifier;
@property (nonatomic) BOOL allowsAddLater;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)verificationChannelsStepContext;
- (id)chooseTransitProductStepContext;
- (id)provisioningProgressStepContext;
- (id)secondaryManualEntryStepContext;
- (id)_baseFlowStepDescription;
- (id)appleBalanceAccountDetailsStepContext;
- (id)chooseCredentialsStepContext;
- (id)chooseEMoneyProductStepContext;
- (id)chooseFlowStepContext;
- (id)chooseProductStepContext;
- (id)digitalIssuanceAmountStepContext;
- (id)digitalIssuancePaymentStepContext;
- (id)getIssuerApplicationAddRequestStepContext;
- (id)localDeviceManualEntryProgressStepContext;
- (id)localDeviceManualEntryStepContext;
- (id)manualEntryStepContext;
- (id)moreInformationStepContext;
- (id)passcodeUpgradeStepContext;
- (id)preconditionsStepContext;
- (id)productDisambiguationStepContext;
- (id)provisioningResultStepContext;
- (id)readerModeEntryStepContext;
- (id)readerModeIngestionStepContext;
- (id)termsAndConditionsStepContext;
- (id)verificationCodeStepContext;
- (id)verificationFieldsStepContext;
- (id)welcomeStepContext;

@end
