@class _INPBDateTimeRange, NSArray, NSString, _INPBString;

@interface _INPBSaveHealthSampleIntentResponse : PBCodable <_INPBSaveHealthSampleIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *defaultUnit;
@property (readonly, nonatomic) BOOL hasDefaultUnit;
@property (retain, nonatomic) _INPBString *punchoutUrl;
@property (readonly, nonatomic) BOOL hasPunchoutUrl;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (readonly, nonatomic) BOOL hasRecordDate;
@property (copy, nonatomic) NSArray *sampleUuids;
@property (readonly, nonatomic) unsigned long long sampleUuidsCount;
@property (retain, nonatomic) _INPBString *userProvidedUnit;
@property (readonly, nonatomic) BOOL hasUserProvidedUnit;
@property (copy, nonatomic) NSArray *valuesDefaultUnits;
@property (readonly, nonatomic) unsigned long long valuesDefaultUnitsCount;
@property (copy, nonatomic) NSArray *valuesUserProvidedUnits;
@property (readonly, nonatomic) unsigned long long valuesUserProvidedUnitsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valuesDefaultUnitType;
+ (Class)valuesUserProvidedUnitType;
+ (Class)sampleUuidsType;

- (void)clearValuesDefaultUnits;
- (void)addValuesDefaultUnit:(id)a0;
- (id)valuesDefaultUnitAtIndex:(unsigned long long)a0;
- (void)clearValuesUserProvidedUnits;
- (void)addValuesUserProvidedUnit:(id)a0;
- (id)valuesUserProvidedUnitAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearSampleUuids;
- (void)addSampleUuids:(id)a0;
- (id)sampleUuidsAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
