@interface AFMyriadAccessoryMetricMessage : NSObject {
    struct MyriadMetricsDataV1 { unsigned char version; unsigned long long sessionId; unsigned char eventType; unsigned long long requestType; unsigned char state; double advDelay; double advInterval; unsigned char coordinationAllowed; unsigned char winnerGoodnessScore; unsigned char winnerProductType; unsigned char winnerDeviceClass; unsigned char homepodInvolved; unsigned char previousDecision; double previousDecisionTime; unsigned char deviceGroup; unsigned char decision; unsigned char lateToElection; unsigned char electionParticipantGoodnessScore[50]; unsigned char electionParticipantDeviceType[50]; unsigned char electionParticipantProductType[50]; unsigned char electionParticipantCount; } _metric;
}

@property (readonly, nonatomic) unsigned char version;
@property (readonly, nonatomic) unsigned long long sessionId;
@property (readonly, nonatomic) unsigned char eventType;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) unsigned char state;
@property (readonly, nonatomic) double advDelay;
@property (readonly, nonatomic) double advInterval;
@property (readonly, nonatomic) BOOL coordinationAllowed;
@property (readonly, nonatomic) unsigned char winnerGoodnessScore;
@property (readonly, nonatomic) unsigned char winnerProductType;
@property (readonly, nonatomic) unsigned char winnerDeviceClass;
@property (readonly, nonatomic) BOOL homepodInvolved;
@property (readonly, nonatomic) BOOL previousDecision;
@property (readonly, nonatomic) double previousDecisionTime;
@property (readonly, nonatomic) unsigned char deviceGroup;
@property (readonly, nonatomic) BOOL decision;
@property (readonly, nonatomic) BOOL lateToElection;
@property (readonly, nonatomic) unsigned char electionParticipantCount;
@property (readonly, nonatomic) char *electionParticipantGoodnessScore;
@property (readonly, nonatomic) char *electionParticipantDeviceType;
@property (readonly, nonatomic) char *electionParticipantProductType;

- (struct MyriadMetricsDataV1 { unsigned char x0; unsigned long long x1; unsigned char x2; unsigned long long x3; unsigned char x4; double x5; double x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; double x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17[50]; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20; })messageAsStruct;
- (BOOL)_decodeMetricDataPayload:(id)a0 decodedPayload:(struct MyriadMetricsDataV1 { unsigned char x0; unsigned long long x1; unsigned char x2; unsigned long long x3; unsigned char x4; double x5; double x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; double x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17[50]; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20; } *)a1;
- (id)_extractMetricDataFromDataPayload:(id)a0;
- (id)initWithDataPayload:(id)a0;
- (id)initWithMetricData:(id)a0;
- (id)messageAsData;

@end
