@class HKCodableQuantity, NSMutableArray, NSString;

@interface HKCodableQuantityValueWithRange : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *codes;
@property (readonly, nonatomic) BOOL hasQuantityValue;
@property (retain, nonatomic) HKCodableQuantity *quantityValue;
@property (readonly, nonatomic) BOOL hasTextualValue;
@property (retain, nonatomic) NSString *textualValue;
@property (readonly, nonatomic) BOOL hasReferenceRangeMin;
@property (retain, nonatomic) HKCodableQuantity *referenceRangeMin;
@property (readonly, nonatomic) BOOL hasReferenceRangeMax;
@property (retain, nonatomic) HKCodableQuantity *referenceRangeMax;
@property (readonly, nonatomic) BOOL hasValueTitle;
@property (retain, nonatomic) NSString *valueTitle;

+ (Class)codeType;

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
- (void)addCode:(id)a0;
- (void)clearCodes;
- (id)codeAtIndex:(unsigned long long)a0;
- (unsigned long long)codesCount;

@end
