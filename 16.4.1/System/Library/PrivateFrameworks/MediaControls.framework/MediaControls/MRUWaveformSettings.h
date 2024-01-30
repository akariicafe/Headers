@class NSArray;

@interface MRUWaveformSettings : NSObject

@property (class, readonly, nonatomic) MRUWaveformSettings *currentSettings;

@property (retain, nonatomic) NSArray *stops;
@property (nonatomic) float amplitudeGain;
@property (nonatomic) float exponentialGain;
@property (nonatomic) float frequencyExponent;
@property (nonatomic) float samplingRefreshRate;
@property (retain, nonatomic) NSArray *adjustmentCoefficients;
@property (nonatomic) float animationDuration;
@property (nonatomic) float springDamping;
@property (nonatomic) float pausedAnimationDuration;
@property (nonatomic) float pausedSpringDamping;
@property (nonatomic) float xScaleMultiplier;
@property (nonatomic) int maximumFramerate;
@property (nonatomic) int minimumFramerate;
@property (nonatomic) float framerateThreshold;
@property (nonatomic) float artworkBlur;
@property (nonatomic) float artworkSaturation;
@property (nonatomic) float minArtworkLuminance;
@property (nonatomic) float maxArtworkLuminance;
@property (nonatomic) float opacity;

- (id)init;
- (void).cxx_destruct;

@end
