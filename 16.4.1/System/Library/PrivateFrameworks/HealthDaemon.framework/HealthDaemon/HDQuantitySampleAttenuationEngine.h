@class NSError;
@protocol HDQuantitySampleAttenuationEngineDelegate;

@interface HDQuantitySampleAttenuationEngine : NSObject {
    struct { double startTime; double endTime; double sampleValue; } _samplesLoadedFromDelegate[1024];
    long long _sampleCountFromDelegate;
    long long _currentSampleIndex;
    BOOL _noMoreDelegateSamples;
    long long _delegateLoadErrorCount;
    NSError *_delegateLoadFirstError;
}

@property (weak, nonatomic) id<HDQuantitySampleAttenuationEngineDelegate> attenuationEngineDelegate;

- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; })attenuateSample:(struct { double x0; double x1; double x2; })a0;
- (BOOL)delegateLoadingWasSuccessful:(id *)a0;
- (id)initWithAttenuationEngineDelegate:(id)a0;

@end
