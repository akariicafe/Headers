@interface AWDWiFiLTEWCI2CountersSliceSpecific : PBCodable <NSCopying> {
    struct { unsigned char lteTxPowerLimitCount : 1; unsigned char lteTxPowerLimitTimeInMS : 1; unsigned char timeSharingWLANIntervalCount : 1; unsigned char timeSharingWLANTimeInMS : 1; unsigned char timestamp : 1; unsigned char type4DueToTimerExpiryCount : 1; unsigned char type4HonouredCount : 1; unsigned char type4HonouredTimeInMS : 1; unsigned char wlanProtectionFramesDueToLTECoexCount : 1; unsigned char wlanRxPriCount : 1; unsigned char wlanRxPriTimeInMS : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasWlanRxPriTimeInMS;
@property (nonatomic) unsigned long long wlanRxPriTimeInMS;
@property (nonatomic) BOOL hasWlanRxPriCount;
@property (nonatomic) unsigned long long wlanRxPriCount;
@property (nonatomic) BOOL hasLteTxPowerLimitTimeInMS;
@property (nonatomic) unsigned long long lteTxPowerLimitTimeInMS;
@property (nonatomic) BOOL hasLteTxPowerLimitCount;
@property (nonatomic) unsigned long long lteTxPowerLimitCount;
@property (nonatomic) BOOL hasType4HonouredTimeInMS;
@property (nonatomic) unsigned long long type4HonouredTimeInMS;
@property (nonatomic) BOOL hasType4HonouredCount;
@property (nonatomic) unsigned long long type4HonouredCount;
@property (nonatomic) BOOL hasTimeSharingWLANTimeInMS;
@property (nonatomic) unsigned long long timeSharingWLANTimeInMS;
@property (nonatomic) BOOL hasTimeSharingWLANIntervalCount;
@property (nonatomic) unsigned long long timeSharingWLANIntervalCount;
@property (nonatomic) BOOL hasWlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) unsigned long long wlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) BOOL hasType4DueToTimerExpiryCount;
@property (nonatomic) unsigned long long type4DueToTimerExpiryCount;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
