@class BWInferenceVideoRequirement, FigLearnedMattingMetalStage;

@interface BWLearnedMattingInferenceProvider : BWTiledEspressoInferenceProvider {
    BWInferenceVideoRequirement *_inputImageVideoRequirement;
    BWInferenceVideoRequirement *_inputAlphaVideoRequirement;
    BWInferenceVideoRequirement *_outputAlphaVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    FigLearnedMattingMetalStage *_metalProcessor;
    void /* unknown type, empty encoding */ _outputTileSize;
    void /* unknown type, empty encoding */ _inputTileSize;
    void /* unknown type, empty encoding */ _inputAlphaScale;
    void /* unknown type, empty encoding */ _outputTileOverlap;
    void /* unknown type, empty encoding */ _inputTileOverlap;
    void /* unknown type, empty encoding */ _numTiles;
}

+ (void)initialize;

- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)type;
- (void)dealloc;
- (int)createInputTileFor:(SEL)a0 to:(id)a1 withInputs:(struct __CVBuffer { } *)a2 atPosition:(id)a3 cmdBuffer:(id *)a4;
- (id)initWithConfiguration:(id)a0 resourceProvider:(id)a1;
- (int)preProcessOutputBuffer:(struct __CVBuffer { } *)a0 forMediaKey:(id)a1;
- (int)propagateInferenceResultFrom:(struct __CVBuffer { } *)a0 forMediaKey:(id)a1 to:(struct opaqueCMSampleBuffer { } *)a2;
- (int)purgeIntermediateResources;
- (int)writeOutputFor:(SEL)a0 to:(id)a1 fromNetworkOutputTiles:(struct __CVBuffer { } *)a2 withAdditionalPixelBuffers:(id)a3 withInputTilePixelBuffers:(id)a4 withInputFullPixelBuffers:(id)a5 atPosition:(id)a6 cmdBuffer:(id *)a7;

@end
