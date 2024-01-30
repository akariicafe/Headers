@protocol MTLTexture, MTLDevice;

@interface SDOFResources : NSObject {
    struct CGSize { double width; double height; } _disparitySize;
    struct CGSize { double width; double height; } _colorSize;
    id<MTLDevice> _device;
}

@property (retain, nonatomic) id<MTLTexture> disparityRefinement_weightsX_tex;
@property (retain, nonatomic) id<MTLTexture> disparityRefinement_weightsY_tex;
@property (retain, nonatomic) id<MTLTexture> disparityRefinement_preproc_tex;
@property (retain, nonatomic) id<MTLTexture> disparityRefinement_sampledD_tex;
@property (retain, nonatomic) id<MTLTexture> disparityRefinement_output_tex;

- (struct CGSize { double x0; double x1; })targetSize;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 disparitySize:(struct CGSize { double x0; double x1; })a2 verbose:(BOOL)a3 config:(id)a4;
- (id)disparityRefinementOutputTexture;

@end
