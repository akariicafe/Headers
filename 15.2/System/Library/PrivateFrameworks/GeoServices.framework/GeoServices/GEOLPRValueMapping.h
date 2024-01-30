@class NSMutableArray, PBDataReader;

@interface GEOLPRValueMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_mappedValues;
    NSMutableArray *_timeConditions;
    NSMutableArray *_values;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_mappedValues : 1; unsigned char read_timeConditions : 1; unsigned char read_values : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableArray *mappedValues;
@property (retain, nonatomic) NSMutableArray *timeConditions;

+ (Class)valueType;
+ (Class)mappedValueType;
+ (Class)timeConditionsType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (void)addValue:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)valuesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)addMappedValue:(id)a0;
- (void)addTimeConditions:(id)a0;
- (unsigned long long)mappedValuesCount;
- (void)clearMappedValues;
- (id)mappedValueAtIndex:(unsigned long long)a0;
- (unsigned long long)timeConditionsCount;
- (void)clearTimeConditions;
- (id)timeConditionsAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)clearValues;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
