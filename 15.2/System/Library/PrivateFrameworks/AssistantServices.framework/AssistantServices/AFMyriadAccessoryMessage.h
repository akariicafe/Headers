@class NSUUID;

@interface AFMyriadAccessoryMessage : NSObject {
    struct myrAccessoryMessage { unsigned char version; unsigned long long requestType; unsigned long long session; double voiceTriggerEndTime; unsigned short audioHash; unsigned char goodnessScore; unsigned char userConfidenceScore; unsigned char tieBreaker; unsigned char deviceClass; unsigned char deviceGroup; unsigned char productType; unsigned char electionDecision; unsigned char emergencyHandled; unsigned char ack; } _message;
}

@property (readonly, nonatomic) unsigned char version;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) unsigned long long session;
@property (readonly, nonatomic) double voiceTriggerEndTime;
@property (readonly, nonatomic) unsigned short audioHash;
@property (readonly, nonatomic) unsigned char goodnessScore;
@property (readonly, nonatomic) unsigned char userConfidenceScore;
@property (readonly, nonatomic) unsigned char tieBreaker;
@property (readonly, nonatomic) unsigned char deviceClass;
@property (readonly, nonatomic) unsigned char deviceGroup;
@property (readonly, nonatomic) unsigned char productType;
@property (readonly, nonatomic, getter=electionWon) unsigned char electionDecision;
@property (readonly, nonatomic, getter=isEmergencyHandled) unsigned char emergencyHandled;
@property (readonly, nonatomic, getter=isAcknowledgement) unsigned char ack;
@property (readonly, nonatomic) NSUUID *accessoryId;
@property (readonly, nonatomic) BOOL isSane;
@property (readonly, nonatomic, getter=usesSerializedProtocol) BOOL serializedProtocol;

+ (id)protocolName;
+ (id)requestTypeKey;
+ (id)acknowledgeRequestKey;
+ (id)sessionIdKey;
+ (id)emergencyHandledKey;
+ (id)electionDecisionKey;
+ (id)myriadRequestTypeAsString:(unsigned long long)a0;
+ (id)audioDataKey;
+ (id)deviceInfoKey;
+ (BOOL)isMyriadRequestMessage:(id)a0;
+ (id)messageKey;

- (id)description;
- (void)_copyRawBytesFromSource:(const void *)a0 toDest:(void *)a1 length:(unsigned long long)a2;
- (void)_initializeMessageObj:(id)a0;
- (void)_initializeMessageObjFromDictionary:(id)a0;
- (id)initPreheatMessageWithSessionId:(unsigned long long)a0 accessoryId:(id)a1;
- (id)initElectionDecisionMessageWithSessionId:(unsigned long long)a0 decision:(BOOL)a1 accessoryId:(id)a2;
- (id)initWithRequestType:(unsigned long long)a0 session:(unsigned long long)a1 voiceTriggerEndTime:(double)a2 audioHash:(unsigned short)a3 goodnessScore:(unsigned char)a4 userConfidenceScore:(unsigned char)a5 tieBreaker:(unsigned char)a6 deviceClass:(unsigned char)a7 deviceGroup:(unsigned char)a8 productType:(unsigned char)a9 electionDecision:(unsigned char)a10 emergencyHandled:(unsigned char)a11 ack:(unsigned char)a12 accessoryId:(id)a13;
- (id)messageAsData;
- (id)initResetMessageWithSessionId:(unsigned long long)a0 accessoryId:(id)a1;
- (id)initWithAccessoryMessage:(id)a0 accessoryId:(id)a1;
- (id)initWithAccessoryMessageAsDictionary:(id)a0 accessoryId:(id)a1;
- (void).cxx_destruct;
- (void)_initWithMessage:(const struct myrAccessoryMessage { unsigned char x0; unsigned long long x1; unsigned long long x2; double x3; unsigned short x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; } *)a0;

@end
