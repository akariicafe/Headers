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

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addNetworkInterfaces:(id)a0;
- (void)clearNetworkInterfaces;
- (unsigned long long)networkInterfacesCount;
- (id)networkInterfacesAtIndex:(unsigned long long)a0;

@end
