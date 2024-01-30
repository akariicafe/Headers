@interface BandDataFusion : NSObject {
    struct { int length; struct *elements; } sharpening;
    struct { int length; struct *elements; } adaptive_blur;
    struct { int length; struct *elements; } diff_weight;
    struct { int length; struct *elements; } luma_fusion_strength;
    struct { int length; struct *elements; } chroma_fusion_strength;
    struct { int length; struct *elements; } black_threshold;
    struct { int length; struct *elements; } chroma_black_threshold;
    struct { int length; struct *elements; } diff_weight_dense;
    struct { int length; struct *elements; } luma_fusion_strength_dense;
    struct { int length; struct *elements; } chroma_fusion_strength_dense;
    struct { int length; struct *elements; } static_ois_sharpening;
}

- (void)dealloc;

@end
