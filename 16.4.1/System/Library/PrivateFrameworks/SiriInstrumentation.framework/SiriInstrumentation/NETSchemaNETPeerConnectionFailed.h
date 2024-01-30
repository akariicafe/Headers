@class NSArray, NSData;

@interface NETSchemaNETPeerConnectionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char isCloudConnected : 1; unsigned char isConnected : 1; unsigned char hasDevice : 1; unsigned char timeSinceLastNearbyChangeInSeconds : 1; unsigned char isNearby : 1; unsigned char isPreferringBtClassic : 1; } _has;
}

@property (copy, nonatomic) NSArray *connectedBtDevices;
@property (nonatomic) BOOL isCloudConnected;
@property (nonatomic) BOOL hasIsCloudConnected;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL hasIsConnected;
@property (nonatomic) BOOL hasDevice;
@property (nonatomic) BOOL hasHasDevice;
@property (nonatomic) double timeSinceLastNearbyChangeInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastNearbyChangeInSeconds;
@property (nonatomic) BOOL isNearby;
@property (nonatomic) BOOL hasIsNearby;
@property (nonatomic) BOOL isPreferringBtClassic;
@property (nonatomic) BOOL hasIsPreferringBtClassic;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteHasDevice;
- (void)addConnectedBtDevices:(id)a0;
- (void)clearConnectedBtDevices;
- (id)connectedBtDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)connectedBtDevicesCount;
- (void)deleteConnectedBtDevices;
- (void)deleteIsCloudConnected;
- (void)deleteIsConnected;
- (void)deleteIsNearby;
- (void)deleteIsPreferringBtClassic;
- (void)deleteTimeSinceLastNearbyChangeInSeconds;

@end
