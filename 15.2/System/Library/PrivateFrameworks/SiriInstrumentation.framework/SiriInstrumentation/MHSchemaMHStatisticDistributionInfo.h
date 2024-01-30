@class NSData;

@interface MHSchemaMHStatisticDistributionInfo : SISchemaInstrumentationMessage {
    struct { unsigned char num : 1; unsigned char max : 1; unsigned char min : 1; unsigned char avg : 1; unsigned char median : 1; unsigned char p95 : 1; unsigned char std : 1; unsigned char warmup : 1; } _has;
}

@property (nonatomic) unsigned int num;
@property (nonatomic) BOOL hasNum;
@property (nonatomic) unsigned long long max;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) unsigned long long min;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) unsigned long long avg;
@property (nonatomic) BOOL hasAvg;
@property (nonatomic) unsigned long long median;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) unsigned long long p95;
@property (nonatomic) BOOL hasP95;
@property (nonatomic) float std;
@property (nonatomic) BOOL hasStd;
@property (nonatomic) unsigned long long warmup;
@property (nonatomic) BOOL hasWarmup;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
