@class QSSTextToSpeechCacheMetaInfo, NSArray;

@interface QSSMutableTextToSpeechCacheContainer : QSSTextToSpeechCacheContainer

@property (copy, nonatomic) QSSTextToSpeechCacheMetaInfo *cache_meta_info;
@property (copy, nonatomic) NSArray *cache_object;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
