@interface FTMutableTextToSpeechRequestDebug : FTTextToSpeechRequestDebug

@property (nonatomic) BOOL force_use_tts_service;
@property (nonatomic) BOOL disable_cache;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
