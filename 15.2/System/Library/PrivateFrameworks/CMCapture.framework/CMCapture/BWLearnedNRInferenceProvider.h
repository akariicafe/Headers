@class BWInferenceVideoRequirement, BWLearnedNRInferenceConfiguration, LearnedNRMetalStage;

@interface BWLearnedNRInferenceProvider : BWTiledEspressoInferenceProvider {
    BWInferenceVideoRequirement *_inputVideoRequirement;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    BWLearnedNRInferenceConfiguration *_configuration;
    LearnedNRMetalStage *_metalStage;
    void /* unknown type, empty encoding */ _numTiles;
    void /* unknown type, empty encoding */ _tileSize;
    short _networkVersion;
}

+ (void)initialize;

- (int)type;
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0 resourceProvider:(id)a1;
- (int)createInputTileFor:(SEL)a0 to:(id)a1 withInputs:(struct __CVBuffer { } *)a2 atPosition:(id)a3 cmdBuffer:(id *)a4;
- (int)writeOutputTile:(SEL)a0 to:(struct __CVBuffer { } *)a1 withAdditionalPixelBuffers:(struct __CVBuffer { } *)a2 withInputTilePixelBuffers:(id)a3 withInputFullPixelBuffers:(id)a4 atPosition:(id)a5 cmdBuffer:(id *)a6;
- (int)propagateInferenceResultsFrom:(struct __CVBuffer { } *)a0 to:(struct opaqueCMSampleBuffer { } *)a1;
- (int)purgeIntermediateResources;

@end
