@class IMDAccount, IMDiMessageIDSTrustedData, IMDServiceSession;

@interface IMConvergeGroupPipelineComponent : IMPipelineComponent {
    IMDServiceSession *_serviceSession;
    IMDAccount *_account;
    IMDiMessageIDSTrustedData *_idsTrustedData;
}

- (void).cxx_destruct;
- (id)initWithServiceSession:(id)a0 idsTrustedData:(id)a1 account:(id)a2;
- (id)runIndividuallyWithInput:(id)a0;

@end
