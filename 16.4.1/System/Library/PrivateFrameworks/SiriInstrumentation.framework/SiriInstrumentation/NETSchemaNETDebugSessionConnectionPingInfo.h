@class NSData;

@interface NETSchemaNETDebugSessionConnectionPingInfo : SISchemaInstrumentationMessage {
    struct { unsigned char pingCount : 1; unsigned char meanPingInMs : 1; unsigned char unacknowledgedPingCount : 1; } _has;
}

@property (nonatomic) unsigned int pingCount;
@property (nonatomic) BOOL hasPingCount;
@property (nonatomic) double meanPingInMs;
@property (nonatomic) BOOL hasMeanPingInMs;
@property (nonatomic) unsigned int unacknowledgedPingCount;
@property (nonatomic) BOOL hasUnacknowledgedPingCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deletePingCount;
- (void)deleteMeanPingInMs;
- (void)deleteUnacknowledgedPingCount;

@end
