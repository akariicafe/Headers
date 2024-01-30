@class NSArray, NSDictionary, NSString, AVAudioMix, AVAssetReaderAudioMixOutputInternal;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

@property (readonly, nonatomic) NSArray *audioTracks;
@property (readonly, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) AVAudioMix *audioMix;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)a0 audioSettings:(id)a1;

- (void)_setAudioVolumeCurve:(id)a0 forTrack:(id)a1;
- (id)mediaType;
- (id)_audioTimePitchAlgorithmForTrack:(id)a0;
- (id)_audioVolumeCurveForTrack:(id)a0;
- (struct opaqueMTAudioProcessingTap { } *)_audioTapProcessorForTrack:(id)a0;
- (id)description;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)init;
- (void)_setAudioTimePitchAlgorithm:(id)a0 forTrack:(id)a1;
- (id)initWithAudioTracks:(id)a0 audioSettings:(id)a1;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0 forTrack:(id)a1;
- (void)dealloc;
- (id)_asset;

@end
