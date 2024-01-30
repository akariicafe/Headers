@class NSString, NRFProgressiveBracketingStatistics, NRFProgressiveBracketingParameters;

@interface BWNRFAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _adaptiveBracketingParametersLock;
    NRFProgressiveBracketingParameters *_progressiveBracketingParameters;
    BOOL _stopAdaptiveBracketing;
    Class _progressiveBracketingStatisticsClass;
    NRFProgressiveBracketingStatistics *_lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)stationary;
- (void)dealloc;
- (id)adaptiveBracketingFrameParametersForGroup:(int)a0;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)a0;
- (float)evZeroTargetGain;
- (BOOL)generateWhiteBalanceParameters;
- (float)previewSNR;
- (double)totalIntegrationTime;
- (double)totalIntegrationTimeForDigitalFlashMode:(int)a0 frameStatistics:(id)a1 stationary:(BOOL)a2 detectedObjects:(id)a3;

@end
