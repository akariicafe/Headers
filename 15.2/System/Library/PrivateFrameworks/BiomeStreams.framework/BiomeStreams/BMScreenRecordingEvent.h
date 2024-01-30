@class NSString;

@interface BMScreenRecordingEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithIsStart:(BOOL)a0;

@end
