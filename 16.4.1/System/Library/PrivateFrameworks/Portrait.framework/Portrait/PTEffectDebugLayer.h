@class PTUtil, PTColor, PTEffectFilter, PTRenderEffectNetwork, PTOpticalFlow, PTMSRResize, PTEffectRelighting;
@protocol PTRenderState, MTLDevice, MTLBuffer, MTLLibrary, MTLTexture, MTLPipelineLibrary, MTLCommandQueue;

@interface PTEffectDebugLayer : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLCommandQueue> _commandQueue;
    PTEffectRelighting *_effectRelighting;
    PTEffectFilter *_disparityNormalFilter;
    PTOpticalFlow *_opticalFlow;
    id<PTRenderState> _renderState;
    PTUtil *_util;
    PTColor *_portraitColor;
    PTMSRResize *_msrColorPyramid;
    PTRenderEffectNetwork *_network;
    id<MTLTexture> _disparityFixedFocus;
    float _focusDepthFixed;
    id<MTLBuffer> _focusObject;
    int _width;
    int _height;
}

- (void).cxx_destruct;
- (void)renderDebugInformation:(long long)a0 renderRequest:(id)a1 humanDetections:(id)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 effectRelighting:(id)a4 disparityNormalFilter:(id)a5 opticalFlow:(id)a6 renderState:(id)a7 util:(id)a8 portraitColor:(id)a9 msrColorPyramid:(id)a10 network:(id)a11 disparityFixedFocus:(id)a12 focusDepthFixed:(float)a13 focusObject:(id)a14;
- (void)renderDebugSubjectRelighting:(id)a0 humanDetections:(id)a1 renderRequest:(id)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (void)renderThumbnails:(id)a0 defaults:(id)a1 renderRequest:(id)a2;

@end
