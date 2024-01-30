@class NSUUID, NSArray, NSString, NSDate;

@interface ATXModeConfigurationUIFlowLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSUUID *dndModeUUID;
@property (readonly, nonatomic) int modeConfigurationEntityType;
@property (readonly, nonatomic) int modeConfigurationUI;
@property (readonly, nonatomic) NSArray *suggestedEntityIdentifiers;
@property (readonly, nonatomic) NSArray *previousEntityIdentifiers;
@property (readonly, nonatomic) NSArray *currentEntityIdentifiers;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)initWithDndModeUUID:(id)a0 modeConfigurationUI:(int)a1 modeConfigurationEntityType:(int)a2 suggestedEntityIdentifiers:(id)a3 previousEntityIdentifiers:(id)a4 currentEntityIdentifiers:(id)a5 eventDate:(id)a6;

@end
