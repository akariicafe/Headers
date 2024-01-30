@class IMDAccount, IMDiMessageIDSTrustedData, IMDServiceSession;

@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {
    IMDServiceSession *_serviceSession;
    IMDAccount *_account;
    IMDiMessageIDSTrustedData *_idsTrustedData;
    id _messageContext;
}

- (void).cxx_destruct;
- (id)runIndividuallyWithInput:(id)a0;
- (id)initWithServiceSession:(id)a0 idsTrustedData:(id)a1 account:(id)a2 messageContext:(id)a3;

@end
