@protocol NDAnalyticsPayloadAssemblerConfigProvider;

@interface NDAnalyticsPayloadAssembler : NSObject

@property (retain, nonatomic) id<NDAnalyticsPayloadAssemblerConfigProvider> configProvider;
@property (nonatomic) unsigned long long maxPayloadSize;

- (void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(id /* block */)a0;
- (id)initWithConfigProvider:(id)a0 maxPayloadSize:(unsigned long long)a1;
- (id)init;
- (void)assemblePayloadsWithEntries:(id)a0 lastUploadDatesByContentType:(id)a1 droppedEnvelopeReasonsToUpload:(id)a2 envelopeSizeByEntry:(id)a3 completion:(id /* block */)a4;
- (void)determinePayloadDeliveryWindowForEntries:(id)a0 withLastUploadDatesByContentType:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
