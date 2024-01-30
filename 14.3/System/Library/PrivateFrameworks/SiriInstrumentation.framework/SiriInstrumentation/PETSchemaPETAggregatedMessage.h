@class PETSchemaPETDistribution, NSData, PETSchemaPETAggregationKey;

@interface PETSchemaPETAggregatedMessage : PBCodable {
    struct { unsigned char count : 1; } _has;
}

@property (retain, nonatomic) PETSchemaPETAggregationKey *key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (retain, nonatomic) PETSchemaPETDistribution *distribution;
@property (nonatomic) BOOL hasDistribution;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
