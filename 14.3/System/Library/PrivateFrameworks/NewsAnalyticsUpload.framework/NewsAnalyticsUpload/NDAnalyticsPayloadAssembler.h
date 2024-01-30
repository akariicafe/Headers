@protocol NDAnalyticsPayloadAssemblerConfigProvider;

@interface NDAnalyticsPayloadAssembler : NSObject

@property (retain, nonatomic) id<NDAnalyticsPayloadAssemblerConfigProvider> configProvider;
@property (nonatomic) unsigned long long maxPayloadSize;

- (void)assemblePayloadsWithEntries:(id)a0 lastUploadDatesByContentType:(id)a1 droppedEnvelopeReasonsToUpload:(id)a2 envelopeSizeByEntry:(id)a3 completion:(id /* block */)a4;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigProvider:(id)a0 maxPayloadSize:(unsigned long long)a1;
- (void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(id /* block */)a0;
- (void)determinePayloadDeliveryWindowForEntries:(id)a0 withLastUploadDatesByContentType:(id)a1 completion:(id /* block */)a2;

@end
