@class SYMessageHeader, NSString, NSMutableArray;

@interface SYSyncAllObjects : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *allObjects;

+ (Class)allObjectsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)allObjectsCount;
- (void)addAllObjects:(id)a0;
- (void)clearAllObjects;
- (id)allObjectsAtIndex:(unsigned long long)a0;

@end
