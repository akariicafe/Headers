@class NSData;

@interface QSSMutableAudioPacket : QSSAudioPacket

@property (copy, nonatomic) NSData *audio_bytes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)audio_bytes:(id /* block */)a0;

@end
