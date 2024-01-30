@class NSString;

@interface HMDHomeLightBrightnessLoggerEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *homeUUID;
@property (readonly, nonatomic) NSString *accessoryUUID;
@property (readonly, nonatomic) NSString *characteristicUUID;
@property (readonly, nonatomic) NSString *brightness;
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
- (id)proto;
- (id)encodeAsProto;
- (id)initWithHomeUUID:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 brightness:(id)a3;

@end
