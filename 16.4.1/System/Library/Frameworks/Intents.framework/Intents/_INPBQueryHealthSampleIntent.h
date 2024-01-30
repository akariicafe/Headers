@class _INPBWellnessUnitType, NSArray, NSString, _INPBIntentMetadata;

@interface _INPBQueryHealthSampleIntent : PBCodable <_INPBQueryHealthSampleIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char expectedResultType : 1; unsigned char objectType : 1; unsigned char questionType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int expectedResultType;
@property (nonatomic) BOOL hasExpectedResultType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) int questionType;
@property (nonatomic) BOOL hasQuestionType;
@property (copy, nonatomic) NSArray *recordDates;
@property (readonly, nonatomic) unsigned long long recordDatesCount;
@property (copy, nonatomic) NSArray *thresholdValues;
@property (readonly, nonatomic) unsigned long long thresholdValuesCount;
@property (retain, nonatomic) _INPBWellnessUnitType *unit;
@property (readonly, nonatomic) BOOL hasUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recordDateType;
+ (Class)thresholdValuesType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsObjectType:(id)a0;
- (int)StringAsExpectedResultType:(id)a0;
- (int)StringAsQuestionType:(id)a0;
- (void)addRecordDate:(id)a0;
- (void)addThresholdValues:(id)a0;
- (void)clearRecordDates;
- (void)clearThresholdValues;
- (id)expectedResultTypeAsString:(int)a0;
- (id)objectTypeAsString:(int)a0;
- (id)questionTypeAsString:(int)a0;
- (id)recordDateAtIndex:(unsigned long long)a0;
- (id)thresholdValuesAtIndex:(unsigned long long)a0;

@end
