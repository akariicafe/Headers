@class QSSTextToSpeechCacheMetaInfo, NSArray;

@interface QSSMutableTextToSpeechCacheContainer : QSSTextToSpeechCacheContainer

@property (copy, nonatomic) QSSTextToSpeechCacheMetaInfo *cache_meta_info;
@property (copy, nonatomic) NSArray *cache_object;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
