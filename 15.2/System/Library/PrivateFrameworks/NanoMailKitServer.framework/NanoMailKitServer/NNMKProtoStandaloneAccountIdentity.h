@class NSString;

@interface NNMKProtoStandaloneAccountIdentity : PBCodable <NSCopying> {
    struct { unsigned char identityType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL hasRefreshToken;
@property (retain, nonatomic) NSString *refreshToken;
@property (nonatomic) BOOL hasIdentityType;
@property (nonatomic) unsigned int identityType;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;

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
