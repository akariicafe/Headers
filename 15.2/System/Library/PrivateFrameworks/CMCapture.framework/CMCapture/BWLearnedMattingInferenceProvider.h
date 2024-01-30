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

- (int)type;
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (id)initWithConfiguration:(id)a0 resourceProvider:(id)a1;
- (int)createInputTileFor:(SEL)a0 to:(id)a1 withInputs:(struct __CVBuffer { } *)a2 atPosition:(id)a3 cmdBuffer:(id *)a4;
- (int)writeOutputTile:(SEL)a0 to:(struct __CVBuffer { } *)a1 withAdditionalPixelBuffers:(struct __CVBuffer { } *)a2 withInputTilePixelBuffers:(id)a3 withInputFullPixelBuffers:(id)a4 atPosition:(id)a5 cmdBuffer:(id *)a6;
- (int)propagateInferenceResultsFrom:(struct __CVBuffer { } *)a0 to:(struct opaqueCMSampleBuffer { } *)a1;
- (int)purgeIntermediateResources;
- (int)preProcessOutputBuffer:(struct __CVBuffer { } *)a0;

@end
