@class NSData;

@interface QSSMutableAudioFrame : QSSAudioFrame

@property (copy, nonatomic) NSData *audio_bytes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)audio_bytes:(id /* block */)a0;

@end
