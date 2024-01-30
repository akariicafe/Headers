@class NSMutableDictionary, TRITrackingId, TRIClient, NSMutableArray;

@interface PPTrialWrapperGuardedData : NSObject {
    TRIClient *trialClient;
    TRITrackingId *trackingId;
    NSMutableArray *notificationTokens;
    NSMutableDictionary *pathOverrides;
    NSMutableDictionary *treatmentNames;
    NSMutableDictionary *availableFactors;
}

- (void).cxx_destruct;

@end
