@class NSString, NSArray, NSDictionary, BMHomeKitClientBase;

@interface BMHomeKitClientMediaAccessoryControlEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *accessoryName;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSArray *zoneNames;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) BMHomeKitClientBase *base;
@property (readonly, copy, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateString;
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateNumber;
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateData;
@property (readonly, copy, nonatomic) NSString *accessoryMediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSArray *zoneUniqueIdentifiers;
@property (readonly, copy, nonatomic) NSString *roomUniqueIdentifier;
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
- (id)initWithBase:(id)a0 accessoryUniqueIdentifier:(id)a1 accessoryStateString:(id)a2 accessoryStateNumber:(id)a3 accessoryStateData:(id)a4 accessoryMediaRouteIdentifier:(id)a5 zoneUniqueIdentifiers:(id)a6 roomUniqueIdentifier:(id)a7 accessoryName:(id)a8 roomName:(id)a9 zoneNames:(id)a10 homeName:(id)a11;

@end
