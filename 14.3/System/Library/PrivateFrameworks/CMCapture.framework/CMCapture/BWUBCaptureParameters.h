@class NSArray, NSString;

@interface BWUBCaptureParameters : NSObject {
    NSString *_portType;
    NSArray *_deepFusionHDREVZeroCountByEffectiveIntegrationTime;
    int _maxNumberOfFramesForAdaptiveBracketing;
    double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
    double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    float _digitalFlashRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
    BOOL _digitalFlashHighlightRecoveryEnabled;
    int _referenceFrameSelectionMethod;
    BOOL _usePreviousSIFR;
    NSArray *_motionAndFocusScoreWeights;
}

@property (readonly, nonatomic) double lowLightEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double sifrMainEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) float sifrGainThreshold;
@property (readonly, nonatomic) float lowLightHDRWithoutSIFRISPDGainThreshold;
@property (readonly, nonatomic) double longWithoutSphereEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double deepFusionEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double redSaturationMainEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) float redSaturationSIFRGainThreshold;
@property (readonly, nonatomic) int toneCurveBehavior;
@property (readonly, nonatomic) BOOL preserveBlackLevel;
@property (readonly, nonatomic) NSArray *afWindowParams;

- (BOOL)usePreviousSIFR;
- (float)digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
- (void)dealloc;
- (double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
- (double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
- (double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
- (float)digitalFlashRecommendRegularFlashSNRThreshold;
- (id)description;
- (float)digitalFlashBacklitRecommendRegularFlashSNRThreshold;
- (BOOL)digitalFlashHighlightRecoveryEnabled;
- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (id)motionAndFocusScoreWeights;
- (int)maxNumberOfFramesForAdaptiveBracketing;
- (int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(double)a0;
- (int)referenceFrameSelectionMethod;

@end
