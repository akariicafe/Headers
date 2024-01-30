@class NSMutableArray;

@interface ATXPBExecutableReferenceCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keysType;

- (void)addKeys:(id)a0;
- (unsigned long long)keysCount;
- (id)keysAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearKeys;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
