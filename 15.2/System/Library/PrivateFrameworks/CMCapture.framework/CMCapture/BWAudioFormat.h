@class NSDictionary;

@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) NSDictionary *audioCompressionSBPOptions;

+ (void)initialize;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)a0;
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1;

- (unsigned int)mediaType;
- (id)description;
- (id)_initForAVAudioSettings:(id)a0 inputFormat:(id)a1;
- (struct opaqueCMFormatDescription { } *)formatDescription;
- (id)_initWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)dealloc;
- (id)debugDescription;

@end
