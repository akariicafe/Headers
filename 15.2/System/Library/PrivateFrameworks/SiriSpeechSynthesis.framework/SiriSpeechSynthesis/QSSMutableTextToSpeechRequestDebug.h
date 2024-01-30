@interface QSSMutableTextToSpeechRequestDebug : QSSTextToSpeechRequestDebug

@property (nonatomic) BOOL force_use_tts_service;
@property (nonatomic) BOOL disable_cache;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
