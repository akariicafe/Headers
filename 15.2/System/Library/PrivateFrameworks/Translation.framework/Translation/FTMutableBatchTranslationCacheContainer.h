@class NSString, NSArray;

@interface FTMutableBatchTranslationCacheContainer : FTBatchTranslationCacheContainer

@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *translated_text;
@property (copy, nonatomic) NSArray *spans;
@property (nonatomic) int sentence_count;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
