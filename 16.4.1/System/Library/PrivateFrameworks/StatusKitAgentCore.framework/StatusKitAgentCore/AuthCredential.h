@class NSString, SharedOwnershipAuth;

@interface AuthCredential : PBCodable <NSCopying> {
    struct { unsigned char authCredentialOneof : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSimpleJwt;
@property (retain, nonatomic) NSString *simpleJwt;
@property (readonly, nonatomic) BOOL hasSharedOwnershipAuth;
@property (retain, nonatomic) SharedOwnershipAuth *sharedOwnershipAuth;
@property (nonatomic) BOOL hasAuthCredentialOneof;
@property (nonatomic) int authCredentialOneof;

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
- (int)StringAsAuthCredentialOneof:(id)a0;
- (id)authCredentialOneofAsString:(int)a0;
- (void)clearOneofValuesForAuthCredentialOneof;

@end
