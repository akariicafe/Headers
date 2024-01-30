@class NSString, NSArray, NSData;

@interface USPSchemaUSPMetric : SISchemaInstrumentationMessage {
    struct { unsigned char value : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *unit;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) double value;
@property (nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSArray *iterationValues;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addIterationValues:(double)a0;
- (void)clearIterationValues;
- (unsigned long long)iterationValuesCount;
- (double)iterationValuesAtIndex:(unsigned long long)a0;

@end
