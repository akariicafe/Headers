@class NSMutableArray;

@interface HDCodableCodedValueCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *codedValues;

+ (Class)codedValuesType;

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
- (void)addCodedValues:(id)a0;
- (void)clearCodedValues;
- (id)codedValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)codedValuesCount;

@end
