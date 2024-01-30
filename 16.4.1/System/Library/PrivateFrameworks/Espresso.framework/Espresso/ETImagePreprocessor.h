@class NSArray;

@interface ETImagePreprocessor : NSObject {
    struct vimage2espresso_param { float scale; int center_mean; int is_image_bgr; int is_network_bgr; float bias_r; float bias_g; float bias_b; float bias_a; int metal_output_plane; unsigned int width; unsigned int height; unsigned int rowbytes; void /* unknown type, empty encoding */ scaleXY; void /* unknown type, empty encoding */ translateXY; int rotate_deg; int use_direct_cvpixelbuffer; int no_alpha_premultiply; } param;
    struct shared_ptr<Espresso::blob_cpu> { struct blob_cpu *__ptr_; struct __shared_weak_count *__cntrl_; } imageBlob;
    struct shared_ptr<Espresso::abstract_context> { struct abstract_context *__ptr_; struct __shared_weak_count *__cntrl_; } ctx;
    unsigned long long nChannels;
    NSArray *imageShape;
    unsigned long long bytesPerPixel;
    unsigned long long bitsPerComponent;
    struct CGColorSpace { } *colorSpace;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } targetBuffer;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } srcBuffer;
    unsigned long long currentSrcBufferSize;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)tensorWithPath:(id)a0;
- (id)initWithImagePreprocessParams:(id)a0;
- (void)loadSrcBufferWithCGImage:(struct CGImage { } *)a0;
- (void)preprocess;
- (id)tensorWithCGImage:(struct CGImage { } *)a0;

@end
