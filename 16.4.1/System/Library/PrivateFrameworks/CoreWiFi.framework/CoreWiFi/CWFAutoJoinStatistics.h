@class NSString, NSMutableDictionary, NSDictionary, NSDate;

@interface CWFAutoJoinStatistics : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *autoJoinTriggerCounts;
@property (copy, nonatomic) NSDate *startedAt;
@property (readonly) unsigned long long autoJoinCount;
@property (readonly) unsigned long long autoJoinRetryCount;
@property (nonatomic) unsigned long long autoJoinAlreadyAssociatedCount;
@property (nonatomic) unsigned long long autoJoinDidFindCandidateCount;
@property (nonatomic) unsigned long long autoJoinDidJoinCount;
@property (nonatomic) unsigned long long autoJoinAbortedCount;
@property (readonly) unsigned long long combinedScanChannelCount;
@property (readonly) unsigned long long combinedScanChannelCount2GHz;
@property (readonly) unsigned long long combinedScanChannelCount5GHz;
@property (readonly) unsigned long long combinedScanChannelCount6GHz;
@property (nonatomic) unsigned long long scanChannelCount;
@property (nonatomic) unsigned long long scanChannelCount2GHz;
@property (nonatomic) unsigned long long scanChannelCount5GHz;
@property (nonatomic) unsigned long long scanChannelCount6GHz;
@property (nonatomic) unsigned long long preAssocScanChannelCount;
@property (nonatomic) unsigned long long preAssocScanChannelCount2GHz;
@property (nonatomic) unsigned long long preAssocScanChannelCount5GHz;
@property (nonatomic) unsigned long long preAssocScanChannelCount6GHz;
@property (nonatomic) unsigned long long followup6GHzScanChannelCount;
@property (nonatomic) unsigned long long GASQueryCount;
@property (nonatomic) unsigned long long autoHotspotCount;
@property (nonatomic) unsigned long long autoHotspotDidFindCandidateCount;
@property (nonatomic) unsigned long long autoHotspotDidJoinCount;
@property (nonatomic) unsigned long long autoHotspotAbortedCount;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly) NSString *coreAnalyticsEventName;
@property (readonly) NSDictionary *coreAnalyticsEventPayload;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)combinedScanChannelCount;
- (unsigned long long)combinedScanChannelCount6GHz;
- (id)initWithCoder:(id)a0;
- (unsigned long long)autoJoinRetryCount;
- (unsigned long long)combinedScanChannelCount5GHz;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)autoJoinCount;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAutoJoinStatistics:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)init;
- (id)debugInfo;
- (void).cxx_destruct;
- (unsigned long long)combinedScanChannelCount2GHz;

@end
