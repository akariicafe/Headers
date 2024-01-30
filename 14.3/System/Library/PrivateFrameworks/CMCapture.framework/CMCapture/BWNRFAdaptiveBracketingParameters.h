@class NSString, NRFProgressiveBracketingStatistics, NRFProgressiveBracketingParameters;

@interface BWNRFAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters> {
    NRFProgressiveBracketingParameters *_progressiveBracketingParameters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _adaptiveBracketingFrameParametersLock;
    BOOL _stopAdaptiveBracketing;
    Class _progressiveBracketingStatisticsClass;
    NRFProgressiveBracketingStatistics *_lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (double)totalIntegrationTime;
- (id)adaptiveBracketingFrameParametersForGroup:(int)a0;
- (float)evZeroTargetGain;
- (id)initWithProgressiveBracketingParameters:(id)a0 progressiveBracketingStatisticsClass:(Class)a1;
- (BOOL)generateWhiteBalanceParameters;
- (float)previewSNR;
- (double)totalIntegrationTimeForDigitalFlashMode:(int)a0 frameStatistics:(id)a1 stationary:(BOOL)a2 detectedObjects:(id)a3;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)a0;
- (id)progressiveBracketingParameters;
- (void)stopAdaptiveBracketing;
- (BOOL)stationary;

@end
