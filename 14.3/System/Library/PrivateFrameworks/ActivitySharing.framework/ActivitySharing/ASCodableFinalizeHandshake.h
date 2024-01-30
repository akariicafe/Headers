@class NSString, ASCodableShareLocations, ASCodableActivityDataPreview;

@interface ASCodableFinalizeHandshake : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;
@property (readonly, nonatomic) BOOL hasInviterShareLocations;
@property (retain, nonatomic) ASCodableShareLocations *inviterShareLocations;
@property (readonly, nonatomic) BOOL hasActivityDataPreview;
@property (retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview;

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

@end
