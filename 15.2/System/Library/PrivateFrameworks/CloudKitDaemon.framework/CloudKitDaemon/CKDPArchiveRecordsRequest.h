@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *idsToArchives;

+ (id)options;
+ (Class)idsToArchiveType;

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
- (void)addIdsToArchive:(id)a0;
- (unsigned long long)idsToArchivesCount;
- (void)clearIdsToArchives;
- (id)idsToArchiveAtIndex:(unsigned long long)a0;

@end
