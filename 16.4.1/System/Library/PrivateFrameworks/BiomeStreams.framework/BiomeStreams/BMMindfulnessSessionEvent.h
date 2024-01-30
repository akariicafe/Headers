@class NSString;

@interface BMMindfulnessSessionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) unsigned long long stateType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (id)initWithSessionType:(unsigned long long)a0 stateType:(unsigned long long)a1;

@end
