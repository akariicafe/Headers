@class NSMutableArray;

@interface HDCloudSyncCodableSharedSummaryRelationshipRecord : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *participants;

+ (Class)participantsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addParticipants:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)participantsCount;
- (void)clearParticipants;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
