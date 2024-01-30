@class CKDPListRange, NSMutableArray;

@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRange;
@property (retain, nonatomic) CKDPListRange *range;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (void)addValue:(id)a0;
- (unsigned long long)valuesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearValues;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
