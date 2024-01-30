@class NSDictionary, NSMutableArray;

@interface ACProtobufVariableValueDictionary : PBCodable <NSCopying>

@property (copy, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairType;

- (void)addPair:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)pairsCount;
- (void)clearPairs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)pairAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
