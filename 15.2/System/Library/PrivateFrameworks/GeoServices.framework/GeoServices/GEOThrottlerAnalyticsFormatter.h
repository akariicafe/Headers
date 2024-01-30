@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject {
    NSMutableDictionary *_throttlerAggregatedInfo;
}

@property (class, readonly, nonatomic) GEOThrottlerAnalyticsFormatter *sharedThrottlerFormatter;

- (BOOL)hasThrottledInfoForKeyPath:(id)a0;
- (int)throttleModeForString:(id)a0;
- (void)captureThrottledReqsForKeyPath:(id)a0 maxReqCount:(id)a1 policyTimeWindow:(double)a2;
- (void)setRequestInfoForKeyPath:(id)a0 at:(id)a1 kind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a2 appId:(id)a3;
- (void)addThrottledReqForKeyPath:(id)a0 at:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasInitialInfoForKeyPath:(id)a0;
- (id)init;
- (int)networkServiceForRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (int)throttleTypeForString:(id)a0;

@end
