@class NSString, NSDictionary, NSNumber;

@interface HMDUserCloudShareOwnerAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *configureState;
@property (readonly, copy) NSNumber *isPrimaryResident;
@property (readonly, copy) NSNumber *hasSharedUser;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDButNotAccepted;
@property (readonly, copy) NSNumber *percentageOfNonAcceptedParticipantsWithKnownCapability;
@property (readonly, copy) NSNumber *percentageOfUsersThatAreNotParticipant;
@property (readonly, copy) NSNumber *percentageOfParticipatingUsersThatNotAccepted;
@property (readonly, copy) NSNumber *percentageOfAcceptedParticipantsWithoutCloudShareID;


- (void).cxx_destruct;
- (id)initWithConfigureState:(long long)a0 isPrimaryResident:(BOOL)a1 trustStatusCounts:(struct CloudShareTrustManagerTrustStatusCounts { long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a2;

@end
