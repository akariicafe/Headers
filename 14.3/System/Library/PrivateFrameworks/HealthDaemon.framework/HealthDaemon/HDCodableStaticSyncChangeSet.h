@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changes;

+ (Class)changesType;
+ (id)changeSetWithChanges:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addChanges:(id)a0;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (id)changesAtIndex:(unsigned long long)a0;

@end
