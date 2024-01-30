@class NSString, NRPBNumber, NSData, NRPBSize, NSMutableArray;

@interface NRPBPropertyValue : PBCodable <NSCopying> {
    struct { unsigned char isDate : 1; unsigned char isError : 1; unsigned char isMiniUUIDSet : 1; unsigned char isSecurePropertyValue : 1; unsigned char isSet : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasNumberValue;
@property (retain, nonatomic) NRPBNumber *numberValue;
@property (readonly, nonatomic) BOOL hasUUIDValue;
@property (retain, nonatomic) NSData *uUIDValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasSizeValue;
@property (retain, nonatomic) NRPBSize *sizeValue;
@property (readonly, nonatomic) BOOL hasDictionaryKey;
@property (retain, nonatomic) NRPBPropertyValue *dictionaryKey;
@property (retain, nonatomic) NSMutableArray *arrayValues;
@property (nonatomic) BOOL hasIsSet;
@property (nonatomic) BOOL isSet;
@property (nonatomic) BOOL hasIsSecurePropertyValue;
@property (nonatomic) BOOL isSecurePropertyValue;
@property (nonatomic) BOOL hasIsDate;
@property (nonatomic) BOOL isDate;
@property (nonatomic) BOOL hasIsError;
@property (nonatomic) BOOL isError;
@property (nonatomic) BOOL hasIsMiniUUIDSet;
@property (nonatomic) BOOL isMiniUUIDSet;

+ (Class)arrayValuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addArrayValues:(id)a0;
- (id)arrayValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;

@end
