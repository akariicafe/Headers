@class QSSTextToSpeechResource, QSSTextToSpeechVoice;

@interface QSSMutableTextToSpeechMeta : QSSTextToSpeechMeta

@property (copy, nonatomic) QSSTextToSpeechVoice *voice;
@property (copy, nonatomic) QSSTextToSpeechResource *resource;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
