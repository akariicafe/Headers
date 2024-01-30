@class NSData;

@interface OTSecureElementPeerIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerIdentifier;
@property (retain, nonatomic) NSData *peerIdentifier;
@property (readonly, nonatomic) BOOL hasPeerData;
@property (retain, nonatomic) NSData *peerData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
