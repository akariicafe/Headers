@class IMDMessageStore;

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
}

- (void).cxx_destruct;
- (id)initWithMessageStore:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;
- (id)_processDeliveryReceiptForMessageGUID:(id)a0 date:(id)a1;
- (void)_metricMessageGUIDDelivered:(id)a0 sendDate:(id)a1 deliveryDate:(id)a2;

@end
