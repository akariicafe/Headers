@class CKDPDistributedTimestampsVersionVector;

@interface CKDPDistributedTimestampsSiteVersionVectors : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPreviousVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *previousVector;
@property (readonly, nonatomic) BOOL hasContentsVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *contentsVector;
@property (readonly, nonatomic) BOOL hasRemovalsVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *removalsVector;
@property (readonly, nonatomic) BOOL hasDependenciesVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *dependenciesVector;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
