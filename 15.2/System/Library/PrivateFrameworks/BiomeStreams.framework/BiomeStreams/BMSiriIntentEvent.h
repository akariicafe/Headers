@class NSString, NSData;

@interface BMSiriIntentEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *intentId;
@property (readonly, copy, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSData *eventData;
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
- (id)initWithIntentId:(id)a0 eventType:(id)a1 eventData:(id)a2;

@end
