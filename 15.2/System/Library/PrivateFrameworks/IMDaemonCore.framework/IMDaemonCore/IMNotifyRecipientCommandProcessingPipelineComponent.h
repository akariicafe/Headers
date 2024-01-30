@class IMDiMessagePipelineResources;

@interface IMNotifyRecipientCommandProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_idsAccount;
- (void).cxx_destruct;
- (id)_account;
- (id)_messageStore;
- (id)runIndividuallyWithInput:(id)a0;
- (id)initWithPipelineResources:(id)a0;
- (void)_markMessageAsNotifiedRecipientAndNotify:(id)a0 session:(id)a1 chat:(id)a2;

@end
