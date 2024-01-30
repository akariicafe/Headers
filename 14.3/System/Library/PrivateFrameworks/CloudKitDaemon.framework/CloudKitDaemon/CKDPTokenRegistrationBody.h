@class NSData, NSString;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {
    struct { unsigned char apnsEnv : 1; unsigned char skipBundleIDCheck : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSData *token;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasApnsEnv;
@property (nonatomic) int apnsEnv;
@property (nonatomic) BOOL hasSkipBundleIDCheck;
@property (nonatomic) BOOL skipBundleIDCheck;

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
- (id)apnsEnvAsString:(int)a0;
- (int)StringAsApnsEnv:(id)a0;

@end
