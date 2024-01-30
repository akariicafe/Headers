@class NSString;

@interface AWDWiFiMetricsManagerUserBlacklistEvent : PBCodable <NSCopying> {
    struct { unsigned char blacklistDuration : 1; unsigned char dstChange : 1; unsigned char timestamp : 1; unsigned char trigger : 1; unsigned char eventType : 1; unsigned char locState : 1; unsigned char moState : 1; unsigned char securityType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned int eventType;
@property (readonly, nonatomic) BOOL hasSsid;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) BOOL hasBlacklistDuration;
@property (nonatomic) unsigned long long blacklistDuration;
@property (readonly, nonatomic) BOOL hasApuuid;
@property (retain, nonatomic) NSString *apuuid;
@property (nonatomic) BOOL hasDstChange;
@property (nonatomic) unsigned long long dstChange;
@property (nonatomic) BOOL hasMoState;
@property (nonatomic) unsigned int moState;
@property (nonatomic) BOOL hasLocState;
@property (nonatomic) unsigned int locState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
