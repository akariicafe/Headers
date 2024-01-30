@class NSString, NSNumber;

@interface SGMessageEventDissectorTrialClientWrapperGuardedData : NSObject {
    NSString *_trialEventExtractionAssetsPath;
    NSString *_trialEventClassifierModelPath;
    NSNumber *_trialEventClassifierThreshold;
    NSNumber *_trialMessageProcessingLimit;
    NSNumber *_trialRateLimitInterval;
}

- (void).cxx_destruct;

@end
