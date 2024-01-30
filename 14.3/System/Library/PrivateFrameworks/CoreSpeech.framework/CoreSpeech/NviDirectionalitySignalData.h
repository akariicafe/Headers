@class NSArray, NSDictionary;

@interface NviDirectionalitySignalData : NviSignalData

@property (nonatomic) unsigned long long startSample;
@property (nonatomic) unsigned long long endSample;
@property (nonatomic) float confidence;
@property (nonatomic) float azimuth;
@property (nonatomic) float estimatedAzimuth;
@property (nonatomic) double processedAudioDurMs;
@property (retain, nonatomic) NSArray *spatialSpectrumData;
@property (retain, nonatomic) NSDictionary *azDistribution;
@property (readonly, nonatomic) float mostSampledAzimuth;

+ (id)headerString;

- (void).cxx_destruct;
- (id)description;
- (id)stringForLogging;
- (id)initWithStartSample:(unsigned long long)a0 endSample:(unsigned long long)a1 confidence:(float)a2 azimuth:(float)a3 estimatedAzimuth:(float)a4;
- (id)_spatialSpectrumLogStr;

@end
