@class NSData;

@interface NPKProtoUpdateSubcredentialMetadataRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassData;
@property (retain, nonatomic) NSData *passData;
@property (readonly, nonatomic) BOOL hasCredentialData;
@property (retain, nonatomic) NSData *credentialData;

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
