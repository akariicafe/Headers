@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *objects;

+ (Class)objectType;

- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearObjects;
- (unsigned long long)objectsCount;

@end
