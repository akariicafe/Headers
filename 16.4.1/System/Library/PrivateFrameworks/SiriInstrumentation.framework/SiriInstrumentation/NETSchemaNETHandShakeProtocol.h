@class NSData;

@interface NETSchemaNETHandShakeProtocol : SISchemaInstrumentationMessage {
    struct { unsigned char protocol : 1; unsigned char handShakeRTT : 1; unsigned char handShakeDuration : 1; } _has;
}

@property (nonatomic) int protocol;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) unsigned int handShakeRTT;
@property (nonatomic) BOOL hasHandShakeRTT;
@property (nonatomic) unsigned long long handShakeDuration;
@property (nonatomic) BOOL hasHandShakeDuration;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteHandShakeDuration;
- (void)deleteHandShakeRTT;
- (void)deleteProtocol;

@end
