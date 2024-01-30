@class NSString, NSData, NSDate;

@interface PLSingleQuery : PBCodable <NSCopying> {
    struct { unsigned char comparator : 1; unsigned char key : 1; unsigned char unit : 1; unsigned char valueType : 1; } _has;
}

@property (nonatomic) double doubleValue;
@property (nonatomic) double secondDoubleValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) long long secondIntegerValue;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *secondStringValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSDate *secondDateValue;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) int key;
@property (nonatomic) BOOL hasValueType;
@property (nonatomic) int valueType;
@property (readonly, nonatomic) BOOL hasFirstValue;
@property (retain, nonatomic) NSData *firstValue;
@property (readonly, nonatomic) BOOL hasSecondValue;
@property (retain, nonatomic) NSData *secondValue;
@property (nonatomic) BOOL hasComparator;
@property (nonatomic) int comparator;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) int unit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)logDescription;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)migratedComparator;
- (void)setValueAndType:(id)a0;

@end
