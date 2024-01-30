@class NSData;

@interface CAMSchemaCAMAggregateFeatureValue : SISchemaInstrumentationMessage {
    struct { unsigned char mean : 1; unsigned char variance : 1; unsigned char numInteractions : 1; } _has;
}

@property (nonatomic) double mean;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) double variance;
@property (nonatomic) BOOL hasVariance;
@property (nonatomic) unsigned int numInteractions;
@property (nonatomic) BOOL hasNumInteractions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteMean;
- (void)deleteNumInteractions;
- (void)deleteVariance;

@end
