@class NSArray, AVAudioMixInternal;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInternal *_audioMix;
}

@property (readonly, copy, nonatomic) NSArray *inputParameters;

- (void)setInputParameters:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_audioMixInputParametersForTrackID:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
