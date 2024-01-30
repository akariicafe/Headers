@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying> {
    struct { unsigned char gatewayPingDuration : 1; unsigned char knownURLLoadDuration : 1; unsigned char siriSaltURLLoadDuration : 1; unsigned char siriURLLoadDuration : 1; unsigned char timestamp : 1; unsigned char gatewayPingsDropped : 1; unsigned char gatewayPingsSent : 1; unsigned char gatewayStatus : 1; unsigned char interface : 1; unsigned char sendBufferBytesRemaining : 1; unsigned char analyzingSuccessfulRetry : 1; unsigned char isUserRequest : 1; unsigned char wwanPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInterface;
@property (nonatomic) int interface;
@property (nonatomic) BOOL hasIsUserRequest;
@property (nonatomic) BOOL isUserRequest;
@property (nonatomic) BOOL hasAnalyzingSuccessfulRetry;
@property (nonatomic) BOOL analyzingSuccessfulRetry;
@property (nonatomic) BOOL hasWwanPreferred;
@property (nonatomic) BOOL wwanPreferred;
@property (nonatomic) BOOL hasSendBufferBytesRemaining;
@property (nonatomic) int sendBufferBytesRemaining;
@property (nonatomic) BOOL hasKnownURLLoadDuration;
@property (nonatomic) unsigned long long knownURLLoadDuration;
@property (nonatomic) BOOL hasSiriURLLoadDuration;
@property (nonatomic) unsigned long long siriURLLoadDuration;
@property (nonatomic) BOOL hasSiriSaltURLLoadDuration;
@property (nonatomic) unsigned long long siriSaltURLLoadDuration;
@property (nonatomic) BOOL hasGatewayStatus;
@property (nonatomic) int gatewayStatus;
@property (nonatomic) BOOL hasGatewayPingDuration;
@property (nonatomic) unsigned long long gatewayPingDuration;
@property (nonatomic) BOOL hasGatewayPingsSent;
@property (nonatomic) unsigned int gatewayPingsSent;
@property (nonatomic) BOOL hasGatewayPingsDropped;
@property (nonatomic) unsigned int gatewayPingsDropped;

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
