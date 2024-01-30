@class IMDMessageStore, IMDChatRegistry, IMDAccount, IMDiMessageIDSTrustedData;

@interface IMChatSessionCloseProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount *_account;
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDiMessageIDSTrustedData *_idsTrustedData;
}

- (id)initWithMessageStore:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 messageStore:(id)a1 chatRegistry:(id)a2 idsTrustedData:(id)a3;
- (id)runIndividuallyWithInput:(id)a0;

@end
