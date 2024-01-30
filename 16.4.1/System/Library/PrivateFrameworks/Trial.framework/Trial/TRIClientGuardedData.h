@class TRIExcessiveStaleFactorsUsageTimer, NSMutableDictionary, TRITrackingId;

@interface TRIClientGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableDictionary *namespaceUpdateHandlerTokens;
    NSMutableDictionary *namespaceCallbacks;
    TRIExcessiveStaleFactorsUsageTimer *excessiveStaleFactorUsageTimer;
    BOOL isLazyInitComplete;
}

- (void).cxx_destruct;

@end
