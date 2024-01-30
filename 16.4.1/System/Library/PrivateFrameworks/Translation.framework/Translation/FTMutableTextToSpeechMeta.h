@class FTQSSVersionInfo, FTTextToSpeechVoice, FTTextToSpeechResource;

@interface FTMutableTextToSpeechMeta : FTTextToSpeechMeta

@property (copy, nonatomic) FTTextToSpeechVoice *voice;
@property (copy, nonatomic) FTTextToSpeechResource *resource;
@property (copy, nonatomic) FTQSSVersionInfo *server_info;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
