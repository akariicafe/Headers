@class IMDAccount, IMDServiceSession, IMDiMessageIDSTrustedData, IDSService;

@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {
    IMDServiceSession *_serviceSession;
    IMDAccount *_account;
    IMDiMessageIDSTrustedData *_idsTrustedData;
    id _messageContext;
    IDSService *_idsService;
}

- (void).cxx_destruct;
- (void)_updateChatForInput:(id)a0 hadChat:(BOOL)a1;
- (id)initWithServiceSession:(id)a0 idsTrustedData:(id)a1 account:(id)a2 messageContext:(id)a3 idsService:(id)a4;
- (id)runIndividuallyWithInput:(id)a0;

@end
