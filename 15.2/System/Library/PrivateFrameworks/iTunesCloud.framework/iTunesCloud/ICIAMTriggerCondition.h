@class NSString;

@interface ICIAMTriggerCondition : PBCodable <NSCopying> {
    struct { unsigned char comparisonType : 1; unsigned char dataType : 1; unsigned char kind : 1; unsigned char triggerConditionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) int dataType;
@property (nonatomic) BOOL hasComparisonType;
@property (nonatomic) int comparisonType;
@property (readonly, nonatomic) BOOL hasTriggerValue;
@property (retain, nonatomic) NSString *triggerValue;
@property (nonatomic) BOOL hasTriggerConditionType;
@property (nonatomic) int triggerConditionType;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (int)StringAsDataType:(id)a0;
- (int)StringAsComparisonType:(id)a0;
- (int)StringAsKind:(id)a0;
- (int)StringAsTriggerConditionType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)kindAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dataTypeAsString:(int)a0;
- (id)triggerConditionTypeAsString:(int)a0;
- (unsigned long long)hash;
- (id)comparisonTypeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
