@class NSString, CSLUIPBNumber, NSData, CSLUIPBSize, NSMutableArray;

@interface CSLUIPBPropertyValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasNumberValue;
@property (retain, nonatomic) CSLUIPBNumber *numberValue;
@property (readonly, nonatomic) BOOL hasUUIDValue;
@property (retain, nonatomic) NSData *uUIDValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasSizeValue;
@property (retain, nonatomic) CSLUIPBSize *sizeValue;
@property (readonly, nonatomic) BOOL hasDictionaryKey;
@property (retain, nonatomic) CSLUIPBPropertyValue *dictionaryKey;
@property (retain, nonatomic) NSMutableArray *arrayValues;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addArrayValues:(id)a0;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;
- (id)arrayValuesAtIndex:(unsigned long long)a0;

@end
