@class NSData, NSArray;

@interface QSSMutableTextToSpeechCacheObject : QSSTextToSpeechCacheObject

@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)audio:(id /* block */)a0;

@end
