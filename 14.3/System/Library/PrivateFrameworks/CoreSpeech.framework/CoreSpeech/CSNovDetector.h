@interface CSNovDetector : NSObject {
    void *_novDetect;
}

- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)reset;
- (void)dealloc;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (unsigned int)numResultsAvailable;
- (void)resetBest;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultForPhraseId:(unsigned int)a0;
- (id)getOptionValue:(id)a0;

@end
