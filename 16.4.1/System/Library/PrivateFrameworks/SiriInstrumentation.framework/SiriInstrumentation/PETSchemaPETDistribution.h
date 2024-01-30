@class NSData;

@interface PETSchemaPETDistribution : SISchemaInstrumentationMessage {
    struct { unsigned char min : 1; unsigned char max : 1; unsigned char mean : 1; unsigned char variance : 1; } _has;
}

@property (nonatomic) double min;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) double max;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) double mean;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) double variance;
@property (nonatomic) BOOL hasVariance;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteMax;
- (void)deleteMean;
- (void)deleteMin;
- (void)deleteVariance;

@end
