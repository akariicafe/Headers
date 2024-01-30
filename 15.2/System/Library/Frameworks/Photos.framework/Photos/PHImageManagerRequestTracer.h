@interface PHImageManagerRequestTracer : NSObject

+ (void)initialize;
+ (void)_inq_recordRequestID:(long long)a0;
+ (id)_currentTimestampString;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (int)requestIDFromTaskIdentifier:(id)a0;
+ (void)registerRequestID:(int)a0 withAssetUUID:(id)a1;
+ (void)setTracingDisabled:(BOOL)a0;
+ (void)traceMessageForRequestID:(int)a0 message:(id)a1;
+ (id)recentMessagesSummaryForAssetUUID:(id)a0;

@end
