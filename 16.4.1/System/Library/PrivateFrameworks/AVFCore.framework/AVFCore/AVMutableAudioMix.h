@class NSArray, AVMutableAudioMixInternal;

@interface AVMutableAudioMix : AVAudioMix {
    AVMutableAudioMixInternal *_mutableAudioMix;
}

@property (copy, nonatomic) NSArray *inputParameters;

+ (id)audioMix;

@end
