@class NSDictionary, NSString, NSDate;

@interface HMDCloudSyncAnalysisResultLogEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (retain, nonatomic) NSDate *creationDate;
@property unsigned long long dataSyncState;
@property BOOL uploadMaximumDelayReached;
@property BOOL lastDecryptionFailed;
@property unsigned long long incomingPushCount;
@property unsigned long long fetchCount;
@property unsigned long long legacyFetchCount;
@property unsigned long long fetchErrorCount;
@property unsigned long long legacyFetchErrorCount;
@property unsigned long long uploadCount;
@property unsigned long long legacyUploadCount;
@property unsigned long long uploadErrorCount;
@property unsigned long long legacyUploadErrorCount;
@property unsigned long long decryptionFailedCount;
@property unsigned long long bytesFetched;
@property unsigned long long bytesPushed;
@property unsigned long long legacyBytesFetched;
@property unsigned long long legacyBytesPushed;
@property (retain, nonatomic) NSDictionary *legacyUploadReasonCountMap;
@property (retain, nonatomic) NSDictionary *uploadErrorCountMap;
@property (retain, nonatomic) NSDictionary *legacyUploadErrorCountMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
