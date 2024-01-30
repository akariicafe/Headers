@class NSData, NSString;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {
    struct { unsigned char expirationTimeInterval : 1; unsigned char sessionID : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSData *token;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) BOOL hasExpirationTimeInterval;
@property (nonatomic) double expirationTimeInterval;
@property (readonly, nonatomic) BOOL hasStorefrontIdentifier;
@property (retain, nonatomic) NSString *storefrontIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
