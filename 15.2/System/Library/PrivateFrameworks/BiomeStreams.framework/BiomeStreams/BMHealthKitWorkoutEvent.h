@class NSString;

@interface BMHealthKitWorkoutEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isFirstPartyDonation;
@property (readonly, nonatomic) BOOL isIndoor;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityUUID;
@property (nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) BOOL isUpdate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithIsFirstPartyDonation:(BOOL)a0 isIndoor:(BOOL)a1 activityType:(id)a2 activityUUID:(id)a3 eventType:(unsigned long long)a4 isUpdate:(BOOL)a5;
- (id)initWithIsFirstPartyDonation:(BOOL)a0 isIndoor:(BOOL)a1 activityType:(id)a2 activityUUID:(id)a3 eventType:(unsigned long long)a4;

@end
