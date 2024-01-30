@class NSString;

@interface SGDeliveryDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createEnrichmentWithMatch:(id)a0 onParentEntity:(id)a1;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)_logDeliverySenderForSenderDomain:(id)a0;
- (id)_createEnrichmentsForDetections:(id)a0 entity:(id)a1;
- (void)_logUniqueEnrichments:(id)a0;

@end
