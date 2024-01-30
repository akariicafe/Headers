@class InsertResponse, MarkForDeletionResponse;

@interface BatchUpdateResponse_UpdateResponseData : GPBMessage

@property (readonly, nonatomic) int responseDataOneOfCase;
@property (retain, nonatomic) InsertResponse *insertResponse;
@property (retain, nonatomic) MarkForDeletionResponse *markForDeletionResponse;

+ (id)descriptor;

@end
