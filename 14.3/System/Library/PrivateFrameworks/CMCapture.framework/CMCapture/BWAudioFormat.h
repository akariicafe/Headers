@class NSDictionary;

@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) NSDictionary *audioCompressionSBPOptions;

+ (void)initialize;
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)a0;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (void)dealloc;
- (id)_initWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)description;
- (id)_initForAVAudioSettings:(id)a0 inputFormat:(id)a1;
- (id)debugDescription;

@end
