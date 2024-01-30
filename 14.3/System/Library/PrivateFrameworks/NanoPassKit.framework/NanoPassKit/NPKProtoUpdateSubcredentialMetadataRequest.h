@class NSData;

@interface NPKProtoUpdateSubcredentialMetadataRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassData;
@property (retain, nonatomic) NSData *passData;
@property (readonly, nonatomic) BOOL hasCredentialData;
@property (retain, nonatomic) NSData *credentialData;

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
