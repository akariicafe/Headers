@class MutableFloatArray;

@interface PTCinematographyFocusSmoother : NSObject

@property (retain) MutableFloatArray *cachedSamples;
@property unsigned long long unprocessedSampleCount;
@property (readonly) unsigned long long minSamplesNeeded;
@property (readonly) BOOL didEndSamples;
@property (readonly) BOOL isEndOfSmoothedSamples;
@property (readonly) BOOL isSmoothedSampleAvailable;
@property (retain) PTCinematographyFocusSmoother *nextFocusSmoother;
@property (readonly) PTCinematographyFocusSmoother *lastFocusSmoother;

- (void)addSample:(float)a0;
- (void).cxx_destruct;
- (id)init;
- (void)endSamples;
- (float)nextSmoothedSample;
- (void)_padToFill;
- (float)_getSmoothedSample;
- (void)_advanceToNextSmoothedSample;
- (void)_padByCount:(unsigned long long)a0;
- (float)_lastAddedSample;

@end
