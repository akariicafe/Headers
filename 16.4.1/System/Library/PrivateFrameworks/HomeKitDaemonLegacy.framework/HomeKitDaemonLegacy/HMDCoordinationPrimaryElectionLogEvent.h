@class NSString, NSDictionary;

@interface HMDCoordinationPrimaryElectionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property BOOL isPrimary;
@property BOOL didChangePrimary;
@property unsigned long long electionTriggerReason;
@property unsigned long long confirmationCriteria;
@property BOOL meshAndPrimaryCandidateCountEqual;
@property BOOL previousPrimaryInMesh;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;



@end
