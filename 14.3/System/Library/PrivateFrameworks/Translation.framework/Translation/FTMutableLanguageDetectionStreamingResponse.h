@class FTLanguageDetectionResponse;

@interface FTMutableLanguageDetectionStreamingResponse : FTLanguageDetectionStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTLanguageDetectionResponse *contentAsFTLanguageDetectionResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
