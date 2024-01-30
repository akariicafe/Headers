@interface VTNovDetector : NSObject {
    void *_novDetect;
}

- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)resetBest;
- (id)getOptionValue:(id)a0;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (id)getAnalyzedResultForPhraseId:(unsigned int)a0;
- (unsigned int)numResultsAvailable;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)dealloc;
- (void)reset;

@end
