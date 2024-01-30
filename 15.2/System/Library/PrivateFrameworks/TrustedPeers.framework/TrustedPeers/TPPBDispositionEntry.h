@class NSString, TPPBDisposition;

@interface TPPBDispositionEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) BOOL hasDisposition;
@property (retain, nonatomic) TPPBDisposition *disposition;

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

@end
