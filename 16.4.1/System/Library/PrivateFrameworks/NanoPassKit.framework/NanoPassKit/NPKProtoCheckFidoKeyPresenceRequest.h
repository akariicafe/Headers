@class NSString, NSData;

@interface NPKProtoCheckFidoKeyPresenceRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRelyingParty;
@property (retain, nonatomic) NSString *relyingParty;
@property (readonly, nonatomic) BOOL hasRelyingPartyAccountHash;
@property (retain, nonatomic) NSString *relyingPartyAccountHash;
@property (readonly, nonatomic) BOOL hasFidoKeyHash;
@property (retain, nonatomic) NSData *fidoKeyHash;

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
