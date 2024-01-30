@class IMDMessageStore, IMDChatRegistry, IMDRecentsController, IDSService;

@interface IMMarkUnreadRequestProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDRecentsController *_recents;
    IDSService *_service;
}

- (void).cxx_destruct;
- (id)initWithMessageStore:(id)a0 chatRegistry:(id)a1 recents:(id)a2 IDSService:(id)a3;
- (id)runIndividuallyWithInput:(id)a0;

@end
