@class SYMessageHeader, NSString, NSMutableArray;

@interface SYBatchSyncChunk : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned int chunkIndex;
@property (retain, nonatomic) NSMutableArray *objects;

+ (Class)objectsType;

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
- (void)addObjects:(id)a0;
- (unsigned long long)objectsCount;
- (void)clearObjects;
- (id)objectsAtIndex:(unsigned long long)a0;

@end
