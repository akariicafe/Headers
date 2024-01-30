@class NSString;

@interface BMMicroLocationNumDevicesPerTechnology : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *technology;
@property (readonly, nonatomic) unsigned int numDevices;
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
- (id)initWithTechnology:(id)a0 numDevices:(unsigned int)a1;

@end
