@class _INPBWellnessUnitType, _INPBDateTimeRange, NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSaveHealthSampleIntent : PBCodable <_INPBSaveHealthSampleIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char objectType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic) BOOL hasObjectType;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (readonly, nonatomic) BOOL hasRecordDate;
@property (copy, nonatomic) NSArray *sampleMetadatas;
@property (readonly, nonatomic) unsigned long long sampleMetadatasCount;
@property (retain, nonatomic) _INPBWellnessUnitType *unit;
@property (readonly, nonatomic) BOOL hasUnit;
@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valuesType;
+ (Class)sampleMetadataType;

- (void)encodeWithCoder:(id)a0;
- (id)objectTypeAsString:(int)a0;
- (int)StringAsObjectType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addValues:(id)a0;
- (void)clearSampleMetadatas;
- (void)addSampleMetadata:(id)a0;
- (id)sampleMetadataAtIndex:(unsigned long long)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearValues;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
