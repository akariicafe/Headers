@class NSData;

@interface AWDSymptomsNetworkLowInternetModeRecord : PBCodable <NSCopying> {
    struct { unsigned char limConnTimeoutRatePercent : 1; unsigned char limDLMaxBWBps : 1; unsigned char limPacketLossRatePercent : 1; unsigned char limPacketOOORatePercent : 1; unsigned char limRTTAvgMilliseconds : 1; unsigned char limRTTMinMilliseconds : 1; unsigned char limRTTVarMilliseconds : 1; unsigned char limULMaxBWBps : 1; unsigned char timestamp : 1; unsigned char limDLDetected : 1; unsigned char limInterfaceType : 1; unsigned char limULDetected : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasLimSignature;
@property (retain, nonatomic) NSData *limSignature;
@property (nonatomic) BOOL hasLimDLMaxBWBps;
@property (nonatomic) unsigned long long limDLMaxBWBps;
@property (nonatomic) BOOL hasLimULMaxBWBps;
@property (nonatomic) unsigned long long limULMaxBWBps;
@property (nonatomic) BOOL hasLimPacketLossRatePercent;
@property (nonatomic) unsigned long long limPacketLossRatePercent;
@property (nonatomic) BOOL hasLimPacketOOORatePercent;
@property (nonatomic) unsigned long long limPacketOOORatePercent;
@property (nonatomic) BOOL hasLimRTTVarMilliseconds;
@property (nonatomic) unsigned long long limRTTVarMilliseconds;
@property (nonatomic) BOOL hasLimRTTMinMilliseconds;
@property (nonatomic) unsigned long long limRTTMinMilliseconds;
@property (nonatomic) BOOL hasLimRTTAvgMilliseconds;
@property (nonatomic) unsigned long long limRTTAvgMilliseconds;
@property (nonatomic) BOOL hasLimConnTimeoutRatePercent;
@property (nonatomic) unsigned long long limConnTimeoutRatePercent;
@property (nonatomic) BOOL hasLimDLDetected;
@property (nonatomic) unsigned int limDLDetected;
@property (nonatomic) BOOL hasLimULDetected;
@property (nonatomic) unsigned int limULDetected;
@property (nonatomic) BOOL hasLimInterfaceType;
@property (nonatomic) unsigned int limInterfaceType;

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
