@class _INPBDateTimeRange, NSArray, NSString, _INPBString;

@interface _INPBWellnessObjectResultValue : PBCodable <_INPBWellnessObjectResultValue, NSSecureCoding, NSCopying> {
    struct { unsigned char resultType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (readonly, nonatomic) BOOL hasRecordDate;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasResultType;
@property (retain, nonatomic) _INPBString *unit;
@property (readonly, nonatomic) BOOL hasUnit;
@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valuesType;

- (void)encodeWithCoder:(id)a0;
- (id)resultTypeAsString:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsResultType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearValues;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;

@end
