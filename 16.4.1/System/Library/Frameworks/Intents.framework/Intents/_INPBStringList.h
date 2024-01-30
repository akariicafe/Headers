@class NSArray, _INPBCondition, NSString;

@interface _INPBStringList : PBCodable <_INPBStringList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *conditionType;
@property (readonly, nonatomic) BOOL hasConditionType;
@property (copy, nonatomic) NSArray *dataStrings;
@property (readonly, nonatomic) unsigned long long dataStringsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)dataStringType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addDataString:(id)a0;
- (void)clearDataStrings;
- (id)dataStringAtIndex:(unsigned long long)a0;

@end
