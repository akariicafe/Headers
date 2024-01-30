@class FTTranslationSupportedLanguagesRequest, FTBatchTranslationFeedbackRequest, FTBatchTranslationRequest, NSObject, FTBatchTranslationLoggingRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBatchTranslationStreamingRequest : FTBatchTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property (copy, nonatomic) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property (copy, nonatomic) FTBatchTranslationLoggingRequest *contentAsFTBatchTranslationLoggingRequest;
@property (copy, nonatomic) FTTranslationSupportedLanguagesRequest *contentAsFTTranslationSupportedLanguagesRequest;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
