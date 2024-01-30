@class TRIExcessiveStaleFactorsUsageTimer, NSMutableDictionary, TRITrackingId;

@interface TRIClientGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableDictionary *namespaceUpdateHandlerTokens;
    NSMutableDictionary *namespaceCallbacks;
    TRIExcessiveStaleFactorsUsageTimer *excessiveStaleFactorUsageTimer;
}

- (void).cxx_destruct;

@end
