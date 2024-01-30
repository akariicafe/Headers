@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASREvaluationMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char bestWeight : 1; unsigned char totalDurationInMs : 1; } _has;
}

@property (nonatomic) float bestWeight;
@property (nonatomic) BOOL hasBestWeight;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (copy, nonatomic) NSArray *trains;
@property (copy, nonatomic) NSArray *devs;
@property (copy, nonatomic) NSArray *tests;
@property (copy, nonatomic) NSArray *externals;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addTest:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addDev:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)clearDev;
- (unsigned long long)devCount;
- (id)dictionaryRepresentation;
- (void)addTrain:(id)a0;
- (void)addExternal:(id)a0;
- (void)clearTrain;
- (unsigned long long)trainCount;
- (id)trainAtIndex:(unsigned long long)a0;
- (id)devAtIndex:(unsigned long long)a0;
- (void)clearTest;
- (unsigned long long)testCount;
- (id)testAtIndex:(unsigned long long)a0;
- (void)clearExternal;
- (unsigned long long)externalCount;
- (id)externalAtIndex:(unsigned long long)a0;

@end
