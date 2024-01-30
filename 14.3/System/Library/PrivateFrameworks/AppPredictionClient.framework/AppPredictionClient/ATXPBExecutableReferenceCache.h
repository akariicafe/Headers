@class NSMutableArray;

@interface ATXPBExecutableReferenceCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keysType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addKeys:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)keysCount;
- (void)clearKeys;
- (id)keysAtIndex:(unsigned long long)a0;

@end
