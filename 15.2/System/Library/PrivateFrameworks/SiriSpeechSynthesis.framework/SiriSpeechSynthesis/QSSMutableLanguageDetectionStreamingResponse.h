@class QSSLanguageDetectionResponse;

@interface QSSMutableLanguageDetectionStreamingResponse : QSSLanguageDetectionStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSLanguageDetectionResponse *contentAsQSSLanguageDetectionResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
