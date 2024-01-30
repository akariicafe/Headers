@class NSString;

@interface OTCDPRecoveryInformation : PBCodable <NSCopying> {
    struct { unsigned char containsIcdpData : 1; unsigned char silentRecoveryAttempt : 1; unsigned char useCachedSecret : 1; unsigned char usePreviouslyCachedRecoveryKey : 1; unsigned char usesMultipleIcsc : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecoverySecret;
@property (retain, nonatomic) NSString *recoverySecret;
@property (nonatomic) BOOL hasUseCachedSecret;
@property (nonatomic) BOOL useCachedSecret;
@property (readonly, nonatomic) BOOL hasRecoveryKey;
@property (retain, nonatomic) NSString *recoveryKey;
@property (nonatomic) BOOL hasUsePreviouslyCachedRecoveryKey;
@property (nonatomic) BOOL usePreviouslyCachedRecoveryKey;
@property (nonatomic) BOOL hasSilentRecoveryAttempt;
@property (nonatomic) BOOL silentRecoveryAttempt;
@property (nonatomic) BOOL hasContainsIcdpData;
@property (nonatomic) BOOL containsIcdpData;
@property (nonatomic) BOOL hasUsesMultipleIcsc;
@property (nonatomic) BOOL usesMultipleIcsc;

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

@end
