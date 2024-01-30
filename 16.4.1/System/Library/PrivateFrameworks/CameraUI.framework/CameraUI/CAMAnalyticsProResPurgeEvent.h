@class CAMCaptureGraphConfiguration;

@interface CAMAnalyticsProResPurgeEvent : CAMAnalyticsEvent

@property (readonly, nonatomic) double _startTime;
@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_graphConfiguration;
@property (nonatomic, setter=_setDidUpdateForFirstPurgeOperation:) BOOL _didUpdateForFirstPurgeOperation;
@property (nonatomic, setter=_setTotalBytesPurged:) long long _totalBytesPurged;
@property (nonatomic, setter=_setPurgeOperationCount:) long long _purgeOperationCount;

- (void)publish;
- (id)eventName;
- (void).cxx_destruct;
- (long long)_bucketedCount:(long long)a0;
- (void)_updateForIsBeforePurge:(BOOL)a0 withFreeBytes:(long long)a1 fastPurgeableBytes:(long long)a2 slowPurgeableBytes:(long long)a3 maxRecordingTimeSeconds:(double)a4;
- (id)initWithRequestType:(long long)a0 graphConfiguration:(id)a1 totalBytesInSystem:(long long)a2;
- (void)updateAfterPurgeOperationWithFreeBytes:(long long)a0 fastPurgeableBytes:(long long)a1 slowPurgeableBytes:(long long)a2 maxRecordingTimeSeconds:(double)a3 bytesPurged:(long long)a4;
- (void)updateBeforePurgeOperationWithFreeBytes:(long long)a0 fastPurgeableBytes:(long long)a1 slowPurgeableBytes:(long long)a2 maxRecordingTimeSeconds:(double)a3;
- (void)updateForCancelRequest;
- (void)updateForSkippedPurgeOperationWithFreeBytes:(long long)a0 fastPurgeableBytes:(long long)a1 slowPurgeableBytes:(long long)a2 maxRecordingTimeSeconds:(double)a3;

@end
