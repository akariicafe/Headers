@class NSData, NSString, NSMutableArray;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char longValue : 1; unsigned char type : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasLongValue;
@property (nonatomic) long long longValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSMutableArray *fieldValues;
@property (retain, nonatomic) NSMutableArray *listValues;

+ (Class)fieldValuesType;
+ (Class)listValuesType;

- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)clearListValues;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addListValues:(id)a0;
- (void)addFieldValues:(id)a0;
- (void)clearFieldValues;
- (unsigned long long)fieldValuesCount;
- (id)fieldValuesAtIndex:(unsigned long long)a0;
- (id)listValuesAtIndex:(unsigned long long)a0;
- (id)typeAsString:(int)a0;
- (unsigned long long)listValuesCount;

@end
