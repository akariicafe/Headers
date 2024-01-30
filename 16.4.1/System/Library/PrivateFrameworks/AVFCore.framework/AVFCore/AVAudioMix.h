@class NSArray, AVAudioMixInternal;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInternal *_audioMix;
}

@property (readonly, copy, nonatomic) NSArray *inputParameters;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)audioMixInputParametersForTrackID:(int)a0;
- (void)setInputParameters:(id)a0;

@end
