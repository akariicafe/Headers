@class NSString;

@interface AWDVPNSession : PBCodable <NSCopying> {
    struct { unsigned char inBytes : 1; unsigned char outBytes : 1; unsigned char timestamp : 1; unsigned char disconnectReason : 1; unsigned char duration : 1; unsigned char ipv4Installed : 1; unsigned char ipv6Installed : 1; unsigned char reassertCount : 1; unsigned char systemAuthenMethod : 1; unsigned char triggerTrafficClass : 1; unsigned char triggerType : 1; unsigned char userAuthenMethod : 1; unsigned char appVpnUsed : 1; unsigned char connectFailed : 1; unsigned char proxyInstalled : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasProtocol;
@property (retain, nonatomic) NSString *protocol;
@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) unsigned int triggerType;
@property (nonatomic) BOOL hasTriggerTrafficClass;
@property (nonatomic) unsigned int triggerTrafficClass;
@property (nonatomic) BOOL hasIpv4Installed;
@property (nonatomic) unsigned int ipv4Installed;
@property (nonatomic) BOOL hasIpv6Installed;
@property (nonatomic) unsigned int ipv6Installed;
@property (nonatomic) BOOL hasProxyInstalled;
@property (nonatomic) BOOL proxyInstalled;
@property (nonatomic) BOOL hasAppVpnUsed;
@property (nonatomic) BOOL appVpnUsed;
@property (nonatomic) BOOL hasSystemAuthenMethod;
@property (nonatomic) unsigned int systemAuthenMethod;
@property (nonatomic) BOOL hasUserAuthenMethod;
@property (nonatomic) unsigned int userAuthenMethod;
@property (nonatomic) BOOL hasDisconnectReason;
@property (nonatomic) unsigned int disconnectReason;
@property (nonatomic) BOOL hasConnectFailed;
@property (nonatomic) BOOL connectFailed;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasReassertCount;
@property (nonatomic) unsigned int reassertCount;
@property (nonatomic) BOOL hasInBytes;
@property (nonatomic) unsigned long long inBytes;
@property (nonatomic) BOOL hasOutBytes;
@property (nonatomic) unsigned long long outBytes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
