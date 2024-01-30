@class QSSTextToSpeechResource, QSSTextToSpeechVoice;

@interface QSSMutableTextToSpeechMeta : QSSTextToSpeechMeta

@property (copy, nonatomic) QSSTextToSpeechVoice *voice;
@property (copy, nonatomic) QSSTextToSpeechResource *resource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
