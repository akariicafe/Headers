@interface SSRTriggerPhraseDetectorNDAPI : NSObject {
    void *_novDetect;
    unsigned long long _phId;
}

- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)dealloc;
- (id)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)reset;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1 phId:(unsigned long long)a2;

@end
