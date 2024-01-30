@class NSData, POMMESSchemaPOMMESPegasusKitNetworkTimingData;

@interface POMMESSchemaPOMMESPegasusKitPegasusResponse : SISchemaInstrumentationMessage {
    struct { unsigned char rawResponseSizeInKB : 1; unsigned char compressedResponseSizeInKB : 1; } _has;
}

@property (nonatomic) unsigned int rawResponseSizeInKB;
@property (nonatomic) BOOL hasRawResponseSizeInKB;
@property (nonatomic) unsigned int compressedResponseSizeInKB;
@property (nonatomic) BOOL hasCompressedResponseSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitNetworkTimingData *timingData;
@property (nonatomic) BOOL hasTimingData;
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
- (void)deleteCompressedResponseSizeInKB;
- (void)deleteRawResponseSizeInKB;
- (void)deleteTimingData;

@end
