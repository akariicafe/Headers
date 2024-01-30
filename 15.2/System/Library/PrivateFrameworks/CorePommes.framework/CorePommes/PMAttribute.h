@class NSString, PMPerson, NSData, NSMutableArray;

@interface PMAttribute : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char intValue : 1; unsigned char floatValue : 1; unsigned char key : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasKey;
@property (nonatomic) int key;
@property (readonly, nonatomic) BOOL hasCustomKey;
@property (retain, nonatomic) NSString *customKey;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasPersonValue;
@property (retain, nonatomic) PMPerson *personValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) NSMutableArray *stringValues;
@property (retain, nonatomic) NSMutableArray *personValues;

+ (Class)stringValuesType;
+ (Class)personValuesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)keyAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)StringAsKey:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addStringValues:(id)a0;
- (void)addPersonValues:(id)a0;
- (unsigned long long)stringValuesCount;
- (void)clearStringValues;
- (id)stringValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)personValuesCount;
- (void)clearPersonValues;
- (id)personValuesAtIndex:(unsigned long long)a0;

@end
