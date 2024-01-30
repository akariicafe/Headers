@class NSData, NSString;

@interface CKCDPTrustedTargetCryptoMetadata : PBCodable <NSCopying> {
    struct { unsigned char keyVersion : 1; unsigned char scheme : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptedInvocationKey;
@property (retain, nonatomic) NSData *encryptedInvocationKey;
@property (readonly, nonatomic) BOOL hasProtectionSource;
@property (retain, nonatomic) NSString *protectionSource;
@property (nonatomic) BOOL hasKeyVersion;
@property (nonatomic) long long keyVersion;
@property (nonatomic) BOOL hasScheme;
@property (nonatomic) int scheme;

- (id)schemeAsString:(int)a0;
- (int)StringAsScheme:(id)a0;
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

@end
