@class NSString;

@interface BMUserFocusActivityEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *mode;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithMode:(id)a0 clientID:(id)a1 isStart:(BOOL)a2;

@end
