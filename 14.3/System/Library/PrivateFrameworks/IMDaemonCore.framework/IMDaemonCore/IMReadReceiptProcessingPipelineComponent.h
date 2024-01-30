@class IMDMessageStore, IMDMessageSuppressionController, IMDChatRegistry, IMDRecentsController, IDSService;

@interface IMReadReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDMessageSuppressionController *_messageSuppressionController;
    IMDRecentsController *_recents;
    IDSService *_service;
}

- (void).cxx_destruct;
- (id)runIndividuallyWithInput:(id)a0;
- (id)_markMessagesUpToGUID:(id)a0 forChat:(id)a1 isFromMe:(BOOL)a2 date:(id)a3;
- (id)initWithMessageStore:(id)a0 chatRegistry:(id)a1 messageSuppressionController:(id)a2 recents:(id)a3 IDSService:(id)a4;

@end
