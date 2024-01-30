@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *idsToArchives;

+ (id)options;
+ (Class)idsToArchiveType;

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
- (void)addIdsToArchive:(id)a0;
- (unsigned long long)idsToArchivesCount;
- (void)clearIdsToArchives;
- (id)idsToArchiveAtIndex:(unsigned long long)a0;

@end
