@class NSArray, NSData;

@interface RRSchemaRREntityPoolReturned : SISchemaInstrumentationMessage {
    struct { unsigned char entityCount : 1; } _has;
}

@property (copy, nonatomic) NSArray *candidateEntities;
@property (nonatomic) unsigned int entityCount;
@property (nonatomic) BOOL hasEntityCount;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addCandidateEntities:(id)a0;
- (void)clearCandidateEntities;
- (unsigned long long)candidateEntitiesCount;
- (id)candidateEntitiesAtIndex:(unsigned long long)a0;

@end
