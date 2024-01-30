@class QSSBatchRecoverFinalResponse, QSSPronGuessResponse;

@interface QSSMutableBatchRecoverStreamingResponse : QSSBatchRecoverStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSPronGuessResponse *contentAsQSSPronGuessResponse;
@property (copy, nonatomic) QSSBatchRecoverFinalResponse *contentAsQSSBatchRecoverFinalResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
