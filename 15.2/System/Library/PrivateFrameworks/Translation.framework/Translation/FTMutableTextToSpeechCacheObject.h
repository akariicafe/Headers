@class NSData, NSArray;

@interface FTMutableTextToSpeechCacheObject : FTTextToSpeechCacheObject

@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;

- (void)audio:(id /* block */)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
