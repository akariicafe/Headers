@class NSString, NSData, CKDPZone, CKDPDate, CKDPZoneCapabilities;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {
    struct { unsigned char assetQuotaUsage : 1; unsigned char metadataQuotaUsage : 1; unsigned char deviceCount : 1; unsigned char expired : 1; unsigned char zoneKeyRollAllowed : 1; unsigned char zoneishPcsNeedsRolled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTargetZone;
@property (retain, nonatomic) CKDPZone *targetZone;
@property (readonly, nonatomic) BOOL hasCurrentServerContinuationToken;
@property (retain, nonatomic) NSData *currentServerContinuationToken;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) BOOL hasDeviceCount;
@property (nonatomic) int deviceCount;
@property (nonatomic) BOOL hasAssetQuotaUsage;
@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) BOOL hasMetadataQuotaUsage;
@property (nonatomic) long long metadataQuotaUsage;
@property (readonly, nonatomic) BOOL hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) BOOL hasZoneishPcsNeedsRolled;
@property (nonatomic) BOOL zoneishPcsNeedsRolled;
@property (nonatomic) BOOL hasZoneKeyRollAllowed;
@property (nonatomic) BOOL zoneKeyRollAllowed;
@property (readonly, nonatomic) BOOL hasZonePcsModificationTime;
@property (retain, nonatomic) CKDPDate *zonePcsModificationTime;
@property (readonly, nonatomic) BOOL hasZonePcsModificationDevice;
@property (retain, nonatomic) NSString *zonePcsModificationDevice;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;

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

@end
