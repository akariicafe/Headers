@class NSMutableDictionary;

@interface SiriAnalyticsRootClock : SiriAnalyticsLogicalClock {
    NSMutableDictionary *_derivativeClocksByStreamUUID;
}

- (void).cxx_destruct;
- (id)initWithClockIdentifier:(id)a0 timestampOffset:(unsigned long long)a1;
- (id)derivativeClocks;
- (BOOL)isTrackingDerivativeClockByStreamUUID:(id)a0;
- (id)derivativeClockForStreamUUID:(id)a0;

@end
