@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;
+ (id)decodeMetadataFromData:(id)a0;

- (void)addKeyValuePairs:(id)a0;
- (void)clearKeyValuePairs;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)keyValuePairsCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
