@class NSArray;

@interface QSSMutableSpeechTranslationAudioPacket : QSSSpeechTranslationAudioPacket

@property (copy, nonatomic) NSArray *audio_frames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
