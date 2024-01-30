@class NSString;

@interface SYPeer : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) BOOL hasGenerationID;
@property (retain, nonatomic) NSString *generationID;

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
- (id)initWithPeerID:(id)a0 generation:(id)a1;

@end
