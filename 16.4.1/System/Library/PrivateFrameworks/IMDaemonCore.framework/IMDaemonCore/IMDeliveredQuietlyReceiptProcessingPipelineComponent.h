@class IMDiMessagePipelineResources;

@interface IMDeliveredQuietlyReceiptProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_account;
- (id)_messageStore;
- (void).cxx_destruct;
- (id)_idsAccount;
- (void)_markMessageAsDeliveredQuietlyAndNotify:(id)a0 session:(id)a1 chat:(id)a2;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
