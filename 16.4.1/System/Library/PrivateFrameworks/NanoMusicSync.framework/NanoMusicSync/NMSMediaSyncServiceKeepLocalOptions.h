@class NSString;

@interface NMSMediaSyncServiceKeepLocalOptions : PBCodable <NSCopying> {
    struct { unsigned char timeout : 1; unsigned char downloadOffPowerPolicy : 1; unsigned char downloadOnCellularPolicy : 1; unsigned char qualityOfService : 1; unsigned char requiresValidation : 1; } _has;
}

@property (nonatomic) BOOL hasRequiresValidation;
@property (nonatomic) BOOL requiresValidation;
@property (nonatomic) BOOL hasDownloadOffPowerPolicy;
@property (nonatomic) int downloadOffPowerPolicy;
@property (nonatomic) BOOL hasDownloadOnCellularPolicy;
@property (nonatomic) int downloadOnCellularPolicy;
@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) int qualityOfService;
@property (nonatomic) BOOL hasTimeout;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) BOOL hasCellularBundleIdentifier;
@property (retain, nonatomic) NSString *cellularBundleIdentifier;

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
- (int)StringAsDownloadOffPowerPolicy:(id)a0;
- (int)StringAsDownloadOnCellularPolicy:(id)a0;
- (id)downloadOffPowerPolicyAsString:(int)a0;
- (int)StringAsQualityOfService:(id)a0;
- (id)downloadOnCellularPolicyAsString:(int)a0;
- (id)qualityOfServiceAsString:(int)a0;

@end
