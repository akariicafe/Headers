@class SYMessageHeader, NSString, NSMutableArray;

@interface SYBatchSyncChunk : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned int chunkIndex;
@property (retain, nonatomic) NSMutableArray *objects;

+ (Class)objectsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addObjects:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)objectsCount;
- (void)clearObjects;
- (id)objectsAtIndex:(unsigned long long)a0;

@end
