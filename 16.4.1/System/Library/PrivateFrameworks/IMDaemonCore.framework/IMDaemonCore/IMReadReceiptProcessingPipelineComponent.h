@class IMDMessageStore, IMDChatRegistry, IMDRecentsController, IDSService;

@interface IMReadReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDRecentsController *_recents;
    IDSService *_service;
}

- (void).cxx_destruct;
- (void)_donateReadEventForChat:(id)a0;
- (id)_markMessagesUpToGUID:(id)a0 forChat:(id)a1 isFromMe:(BOOL)a2 date:(id)a3;
- (id)initWithMessageStore:(id)a0 chatRegistry:(id)a1 recents:(id)a2 IDSService:(id)a3;
- (id)runIndividuallyWithInput:(id)a0;

@end
