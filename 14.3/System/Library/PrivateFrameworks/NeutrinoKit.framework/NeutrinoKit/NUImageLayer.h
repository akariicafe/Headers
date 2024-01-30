@class NUImageGeometry, NUGLPipeline, NUGLVertexArray;
@protocol NUTextureImage;

@interface NUImageLayer : NUGLLayer {
    NUGLPipeline *_pipeline;
    NUGLVertexArray *_vertices;
    BOOL _debugTextureDrawing;
}

@property (retain) id<NUTextureImage> _image;
@property (retain) NUImageGeometry *_geometry;
@property (retain) id<NUTextureImage> image;
@property (retain) NUImageGeometry *geometry;
@property (readonly, nonatomic) BOOL nu_contentsAreFlipped;
@property (retain) struct CGColor { } *debugColor;
@property (nonatomic) struct { long long x; long long y; } validRegionInsets;

+ (id)vertexLayout;
+ (id)fragmentShaderProgram;
+ (id)vertexShaderProgram;

- (id)init;
- (void).cxx_destruct;
- (void)reset:(id)a0;
- (void)draw:(id)a0;
- (void)clearBackground:(struct CGColor { } *)a0 context:(id)a1;
- (void)drawImage:(id)a0 region:(id)a1 context:(id)a2;
- (void)drawTexture:(id)a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 atPoint:(struct { long long x0; long long x1; })a2 context:(id)a3;

@end
