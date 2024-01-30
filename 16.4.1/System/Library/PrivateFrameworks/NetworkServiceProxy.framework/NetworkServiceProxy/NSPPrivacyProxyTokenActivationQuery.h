@class NSPPrivacyProxyTokenInfo, NSPPrivacyProxyBAAValidation;

@interface NSPPrivacyProxyTokenActivationQuery : PBCodable <NSCopying> {
    int _authType;
    NSPPrivacyProxyBAAValidation *_baaParameters;
    NSPPrivacyProxyTokenInfo *_tokenInfo;
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
