@class IMDiMessagePipelineResources;

@interface IMSyndicationActionProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_chatRegistry;
- (id)_messageStore;
- (id)runIndividuallyWithInput:(id)a0;
- (id)_broadcaster;
- (id)initWithPipelineResources:(id)a0;
- (id)findSMSChatForInput:(id)a0;
- (id)handleMessageSyndicationAction:(id)a0 chat:(id)a1;
- (id)handleChatSyndicationAction:(id)a0 chat:(id)a1;

@end
