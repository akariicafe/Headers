@class NSArray, FTTextToSpeechCacheMetaInfo;

@interface FTMutableTextToSpeechCacheContainer : FTTextToSpeechCacheContainer

@property (copy, nonatomic) FTTextToSpeechCacheMetaInfo *cache_meta_info;
@property (copy, nonatomic) NSArray *cache_object;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
