@class QSSFinalBlazarResponse, QSSBatchTranslationResponse;

@interface QSSMutableBatchTranslationStreamingResponse : QSSBatchTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSBatchTranslationResponse *contentAsQSSBatchTranslationResponse;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
