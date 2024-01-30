@class NPKPaymentProvisioningFlowControllerRequestContext, NSString;

@interface NPKPaymentProvisioningFlowStepContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NPKPaymentProvisioningFlowControllerRequestContext *requestContext;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) NSString *backStepIdentifier;
@property (nonatomic) BOOL allowsAddLater;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)welcomeStepContext;
- (id)chooseFlowStepContext;
- (id)chooseProductStepContext;
- (id)chooseCredentialsStepContext;
- (id)digitalIssuanceAmountStepContext;
- (id)digitalIssuancePaymentStepContext;
- (id)moreInformationStepContext;
- (id)readerModeEntryStepContext;
- (id)readerModeIngestionStepContext;
- (id)manualEntryStepContext;
- (id)secondaryManualEntryStepContext;
- (id)localDeviceManualEntryStepContext;
- (id)localDeviceManualEntryProgressStepContext;
- (id)productDisambiguationStepContext;
- (id)passcodeUpgradeStepContext;
- (id)termsAndConditionsStepContext;
- (id)provisioningProgressStepContext;
- (id)provisioningResultStepContext;
- (id)_baseFlowStepDescription;
- (id)verificationChannelsStepContext;
- (id)verificationFieldsStepContext;
- (id)verificationCodeStepContext;
- (id)getIssuerApplicationAddRequestStepContext;

@end
