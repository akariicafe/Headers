@class IMDMessageStore;

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
}

- (id)initWithMessageStore:(id)a0;
- (void).cxx_destruct;
- (void)_metricMessageGUIDDelivered:(id)a0 sendDate:(id)a1 deliveryDate:(id)a2;
- (id)_processDeliveryReceiptForMessageGUID:(id)a0 date:(id)a1;
- (id)runIndividuallyWithInput:(id)a0;

@end
