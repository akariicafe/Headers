@class NSArray, NETSchemaNETDebugSessionConnectionQuality, NSData, NETSchemaNETDebugSessionConnectionNetwork, NETSchemaNETDebugSessionConnectionPingInfo;

@interface NETSchemaNETDebugSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNumber : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionNetwork *network;
@property (nonatomic) BOOL hasNetwork;
@property (copy, nonatomic) NSArray *networkInterfaces;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionPingInfo *pingInfo;
@property (nonatomic) BOOL hasPingInfo;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionQuality *quality;
@property (nonatomic) BOOL hasQuality;
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
- (void)addNetworkInterfaces:(id)a0;
- (void)clearNetworkInterfaces;
- (void)deleteNetwork;
- (void)deleteNetworkInterfaces;
- (void)deletePingInfo;
- (void)deleteQuality;
- (void)deleteSequenceNumber;
- (id)networkInterfacesAtIndex:(unsigned long long)a0;
- (unsigned long long)networkInterfacesCount;

@end
