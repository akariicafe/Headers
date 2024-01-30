@class IMDiMessageIDSTrustedData, IMDAccount;

@interface IMJunkMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDAccount *account;
@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 idsTrustedData:(id)a1;
- (void)_trackSendEventForSender:(id)a0 andReceiver:(id)a1;
- (id)runIndividuallyWithInput:(id)a0;

@end
