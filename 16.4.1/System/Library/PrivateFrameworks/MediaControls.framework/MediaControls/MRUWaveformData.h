@class NSArray;

@interface MRUWaveformData : NSObject

@property (class, readonly, nonatomic) int amplitudeCount;

@property (retain, nonatomic) NSArray *amplitudes;

+ (id)zero;

- (void).cxx_destruct;
- (id)initWithAmplitudes:(id)a0;
- (id)initWithFFTSamples:(float *)a0 count:(int)a1 sampleRate:(float)a2 settings:(id)a3;
- (float)maxAbsoluteDifferenceFrom:(id)a0;

@end
