@class FTPronGuessResponse;

@interface FTMutablePronGuessStreamingResponse : FTPronGuessStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
