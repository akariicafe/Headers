@class IMDiMessagePipelineResources;

@interface IMDeliveredQuietlyReceiptProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_idsAccount;
- (void).cxx_destruct;
- (id)_account;
- (id)_messageStore;
- (id)runIndividuallyWithInput:(id)a0;
- (void)_markMessageAsDeliveredQuietlyAndNotify:(id)a0 session:(id)a1 chat:(id)a2;
- (id)initWithPipelineResources:(id)a0;

@end
