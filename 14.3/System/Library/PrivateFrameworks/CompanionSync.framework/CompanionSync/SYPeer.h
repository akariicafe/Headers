@class NSString;

@interface SYPeer : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) BOOL hasGenerationID;
@property (retain, nonatomic) NSString *generationID;

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
- (id)initWithPeerID:(id)a0 generation:(id)a1;

@end
