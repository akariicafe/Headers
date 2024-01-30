@class NSUUID, NSString;

@interface BMAlarmEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isSleepAlarm;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSUUID *alarmID;
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
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithEventType:(unsigned long long)a0 alarmID:(id)a1 isSleepAlarm:(BOOL)a2;

@end
