@class IMDiMessagePipelineResources;

@interface IMPlayedReceiptProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_messageStore;
- (id)_idsAccount;
- (id)runIndividuallyWithInput:(id)a0;
- (id)initWithPipelineResources:(id)a0;
- (void)_markMessageAsPlayedAndNotify:(id)a0 session:(id)a1 chat:(id)a2 date:(id)a3;

@end
