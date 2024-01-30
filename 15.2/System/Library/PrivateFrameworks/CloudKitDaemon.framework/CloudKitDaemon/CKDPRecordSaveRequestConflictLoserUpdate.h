@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;

+ (Class)conflictLoserEtagsType;

- (void)clearConflictLoserEtags;
- (void)addConflictLoserEtags:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)conflictLoserEtagsCount;

@end
