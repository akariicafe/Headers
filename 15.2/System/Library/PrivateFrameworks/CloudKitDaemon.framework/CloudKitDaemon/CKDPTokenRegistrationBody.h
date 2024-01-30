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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsApnsEnv:(id)a0;
- (unsigned long long)hash;
- (id)apnsEnvAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
