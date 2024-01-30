@class FTPronGuessResponse, FTBatchRecoverFinalResponse;

@interface FTMutableBatchRecoverStreamingResponse : FTBatchRecoverStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property (copy, nonatomic) FTBatchRecoverFinalResponse *contentAsFTBatchRecoverFinalResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
