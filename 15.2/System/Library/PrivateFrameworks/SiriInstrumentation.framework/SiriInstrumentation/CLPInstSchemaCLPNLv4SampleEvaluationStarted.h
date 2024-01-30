@class NSData, SISchemaUUID;

@interface CLPInstSchemaCLPNLv4SampleEvaluationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char batchNumChunks : 1; unsigned char batchChunkId : 1; } _has;
}

@property (nonatomic) unsigned int batchNumChunks;
@property (nonatomic) BOOL hasBatchNumChunks;
@property (nonatomic) unsigned int batchChunkId;
@property (nonatomic) BOOL hasBatchChunkId;
@property (retain, nonatomic) SISchemaUUID *syntheticRequestId;
@property (nonatomic) BOOL hasSyntheticRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
