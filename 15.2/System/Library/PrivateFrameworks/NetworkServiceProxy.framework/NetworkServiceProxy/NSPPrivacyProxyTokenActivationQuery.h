@class NSPPrivacyProxyTokenInfo, NSPPrivacyProxyBAAValidation;

@interface NSPPrivacyProxyTokenActivationQuery : PBCodable <NSCopying>

@property (nonatomic) int authType;
@property (readonly, nonatomic) BOOL hasBaaParameters;
@property (retain, nonatomic) NSPPrivacyProxyBAAValidation *baaParameters;
@property (retain, nonatomic) NSPPrivacyProxyTokenInfo *tokenInfo;

- (id)authTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (int)StringAsAuthType:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
