@class AVAudioMixEffectParametersInternal;

@interface AVAudioMixEffectParameters : NSObject <NSCopying> {
    AVAudioMixEffectParametersInternal *_audioEffect;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
