@class NSString, NSData;

@interface DODMLASRSchemaDODMLASRModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char trainingDurationInMs : 1; unsigned char conversionDurationInMs : 1; unsigned char optimizationDurationInMs : 1; unsigned char totalDurationInMs : 1; unsigned char ngramOrder : 1; unsigned char residualAdaptationWeight : 1; } _has;
}

@property (copy, nonatomic) NSString *configName;
@property (nonatomic) BOOL hasConfigName;
@property (nonatomic) unsigned long long trainingDurationInMs;
@property (nonatomic) BOOL hasTrainingDurationInMs;
@property (nonatomic) unsigned long long conversionDurationInMs;
@property (nonatomic) BOOL hasConversionDurationInMs;
@property (nonatomic) unsigned long long optimizationDurationInMs;
@property (nonatomic) BOOL hasOptimizationDurationInMs;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (nonatomic) unsigned int ngramOrder;
@property (nonatomic) BOOL hasNgramOrder;
@property (nonatomic) float residualAdaptationWeight;
@property (nonatomic) BOOL hasResidualAdaptationWeight;
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
