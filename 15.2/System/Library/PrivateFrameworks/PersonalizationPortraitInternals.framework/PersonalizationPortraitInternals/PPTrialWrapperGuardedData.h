@class NSMutableDictionary, NSMutableArray, TRITrackingId;

@interface PPTrialWrapperGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableArray *notificationTokens;
    NSMutableDictionary *pathOverrides;
}

- (void).cxx_destruct;

@end
