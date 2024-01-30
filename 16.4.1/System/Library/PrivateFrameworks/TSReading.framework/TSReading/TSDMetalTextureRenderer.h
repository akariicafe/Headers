@class NSArray, TSDMetalShader, TSDMetalRenderTarget, TSDMetalContext, NSMutableArray;
@protocol TSDMTLDataBuffer;

@interface TSDMetalTextureRenderer : NSObject {
    TSDMetalContext *_metalContext;
    struct CGSize { double width; double height; } _size;
    NSMutableArray *_drawValues;
    TSDMetalShader *_shader;
    TSDMetalShader *_blendingShader;
    id<TSDMTLDataBuffer> _encodingDataBuffer;
    TSDMetalRenderTarget *_renderTarget;
}

@property (retain, nonatomic) NSArray *textures;
@property (readonly, nonatomic) NSArray *dataBuffers;
@property (nonatomic) double opacity;
@property (nonatomic) BOOL shouldDrawOffscreenPass;

- (void).cxx_destruct;
- (void)updateWithTexture:(id)a0 blendPercent:(double)a1 outgoingTexture:(id)a2 incomingTexture:(id)a3;
- (void)drawWithEncoder:(id)a0 andContext:(id)a1 atPercent:(double)a2;
- (id)initWithTextures:(id)a0 size:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (void)p_generateValuesAndBuffers;
- (void)p_setupBlendingShader;
- (void)p_setupOffscreenPass;
- (void)p_setupShader;
- (void)updateWithTexture:(id)a0 opacity:(double)a1;
- (void)updateWithTexture:(id)a0 transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 opacity:(double)a2 cullBackFace:(BOOL)a3;

@end
