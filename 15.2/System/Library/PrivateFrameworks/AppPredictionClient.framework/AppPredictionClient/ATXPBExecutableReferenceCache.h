@class NSMutableArray;

@interface ATXPBExecutableReferenceCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keysType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)keysCount;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)keysAtIndex:(unsigned long long)a0;
- (void)clearKeys;
- (void)addKeys:(id)a0;
- (id)dictionaryRepresentation;

@end
