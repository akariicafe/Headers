@class NSString;

@interface _SNLogMelSpectrogramCustomModel : NSObject <MLCustomModel> {
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    struct SNLogMelParameters { float sampleRate; unsigned int numMelBands; float minFrequency; float maxFrequency; int melType; unsigned int hopLength; unsigned int windowLength; unsigned int windowOffset; unsigned int fftLength; int fftOffset; int normalizationStrategy; } _logMelExtractionParameters;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
