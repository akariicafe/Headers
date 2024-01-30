@class NSArray, NSData, NETSchemaNETSessionConnectionNetwork;

@interface NETSchemaNETSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNumber : 1; unsigned char snapshotTriggerReason : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) int snapshotTriggerReason;
@property (nonatomic) BOOL hasSnapshotTriggerReason;
@property (retain, nonatomic) NETSchemaNETSessionConnectionNetwork *network;
@property (nonatomic) BOOL hasNetwork;
@property (copy, nonatomic) NSArray *networkInterfaces;
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
