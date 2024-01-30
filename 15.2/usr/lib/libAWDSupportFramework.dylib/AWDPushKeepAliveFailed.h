@class NSString;

@interface AWDPushKeepAliveFailed : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char currentGrowthStage : 1; unsigned char dualChannelState : 1; unsigned char error : 1; unsigned char keepAliveVersion : 1; unsigned char lastKeepAliveInterval : 1; unsigned char linkQuality : 1; unsigned char timeSinceConnected : 1; unsigned char timeSinceLastSuccessfulKeepAlive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;
@property (nonatomic) BOOL hasDualChannelState;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic) BOOL hasKeepAliveVersion;
@property (nonatomic) unsigned int keepAliveVersion;
@property (nonatomic) BOOL hasTimeSinceLastSuccessfulKeepAlive;
@property (nonatomic) unsigned int timeSinceLastSuccessfulKeepAlive;
@property (nonatomic) BOOL hasLastKeepAliveInterval;
@property (nonatomic) unsigned int lastKeepAliveInterval;
@property (nonatomic) BOOL hasTimeSinceConnected;
@property (nonatomic) unsigned int timeSinceConnected;
@property (nonatomic) BOOL hasCurrentGrowthStage;
@property (nonatomic) unsigned int currentGrowthStage;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
