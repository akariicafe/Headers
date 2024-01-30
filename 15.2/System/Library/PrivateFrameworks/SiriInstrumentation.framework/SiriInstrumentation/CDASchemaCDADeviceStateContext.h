@class NSData, CDASchemaCDADeviceStateActivityStarted, CDASchemaCDADeviceStateActivityEnded;

@interface CDASchemaCDADeviceStateContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CDASchemaCDADeviceStateActivityStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CDASchemaCDADeviceStateActivityEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
