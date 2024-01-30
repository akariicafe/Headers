@class NSArray;

@interface FTMutableSpeechTranslationAudioPacket : FTSpeechTranslationAudioPacket

@property (copy, nonatomic) NSArray *audio_frames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
