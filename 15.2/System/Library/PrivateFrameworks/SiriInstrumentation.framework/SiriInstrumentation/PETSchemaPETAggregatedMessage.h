@class PETSchemaPETDistribution, NSData, PETSchemaPETAggregationKey;

@interface PETSchemaPETAggregatedMessage : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (retain, nonatomic) PETSchemaPETAggregationKey *key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (retain, nonatomic) PETSchemaPETDistribution *distribution;
@property (nonatomic) BOOL hasDistribution;
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
