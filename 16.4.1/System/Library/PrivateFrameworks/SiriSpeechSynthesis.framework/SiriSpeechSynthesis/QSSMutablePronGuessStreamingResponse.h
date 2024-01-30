@class QSSPronGuessResponse;

@interface QSSMutablePronGuessStreamingResponse : QSSPronGuessStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSPronGuessResponse *contentAsQSSPronGuessResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
