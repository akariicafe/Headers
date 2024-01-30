@class NSData;

@interface NSPPrivacyProxyBAAValidation : PBCodable <NSCopying> {
    NSData *_baaSignature;
    NSData *_intermediateCertificate;
    NSData *_leafCertificate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
