@class SYMessageHeader, NSString, NSMutableArray;

@interface SYSyncBatch : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSMutableArray *changes;

+ (Class)changesType;

- (unsigned long long)changesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addChanges:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearChanges;
- (id)changesAtIndex:(unsigned long long)a0;

@end
