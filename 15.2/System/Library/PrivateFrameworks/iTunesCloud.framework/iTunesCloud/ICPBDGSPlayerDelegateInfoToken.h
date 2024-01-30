@class NSString, NSData;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {
    double _expirationTimeInterval;
    unsigned long long _sessionID;
    NSString *_storefrontIdentifier;
    NSData *_token;
    struct { unsigned char expirationTimeInterval : 1; unsigned char sessionID : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
