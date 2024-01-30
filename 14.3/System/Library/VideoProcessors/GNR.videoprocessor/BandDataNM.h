@interface BandDataNM : NSObject {
    struct { int length; struct *elements; } luma_denoise_strength;
    struct { int length; struct *elements; } chroma_denoise_strength;
    struct { int length; struct *elements; } luma_remix_weight;
    struct { int length; struct *elements; } luma_denoise_strength_evm;
    struct { int length; struct *elements; } chroma_denoise_strength_evm;
    struct { int length; struct *elements; } luma_remix_weight_evm;
    struct { int length; struct *elements; } blue_boost;
    struct { int length; struct *elements; } flatness_boost;
    struct { int length; struct *elements; } flatness_threshold;
    struct { int length; struct *elements; } halo_suppression;
    struct { int length; struct *elements; } radial_sharpness_boost;
    struct { int length; struct *elements; } high_gain_denoise_boost;
    struct { int length; struct *elements; } low_gain_denoise_less;
    struct { int length; struct *elements; } local_gain_threshold;
    struct { int length; struct *elements; } radial_flatness_boost;
}

- (void)dealloc;

@end
