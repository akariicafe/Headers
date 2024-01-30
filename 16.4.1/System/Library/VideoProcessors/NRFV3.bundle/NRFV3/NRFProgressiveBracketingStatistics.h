@class NSData;

@interface NRFProgressiveBracketingStatistics : NSObject

@property (nonatomic) float conversionGain;
@property (nonatomic) float readNoise_1x;
@property (nonatomic) float readNoise_8x;
@property (nonatomic) double integrationTime;
@property (nonatomic) float agc;
@property (nonatomic) float ispDGain;
@property (nonatomic) float sensorDGain;
@property (nonatomic) float ispDGainRangeExpansionFactor;
@property (nonatomic) float gain;
@property (nonatomic) float bias;
@property (nonatomic) BOOL aeLimitsReached;
@property (nonatomic) float aeAverage;
@property (nonatomic) float aeTarget;
@property (nonatomic) int motionFromAEMatrix;
@property (retain, nonatomic) NSData *aeThumbnail;
@property (nonatomic) int aeThumbnailWidth;
@property (nonatomic) int aeThumbnailHeight;
@property (nonatomic) BOOL stationary;
@property (nonatomic) float motionDataBiasErrorEstimate;
@property (nonatomic) int numberOfHumanFaces;
@property (nonatomic) int numberOfHumanBodies;

- (void).cxx_destruct;

@end
