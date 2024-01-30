@class NSString;

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dhcpLatencyMilliSecs : 1; unsigned char dhcpLeaseMins : 1; unsigned char securityType : 1; } _has;
}

@property (nonatomic) BOOL hasDhcpLatencyMilliSecs;
@property (nonatomic) unsigned int dhcpLatencyMilliSecs;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) BOOL hasDhcpLeaseMins;
@property (nonatomic) unsigned int dhcpLeaseMins;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasPrivateMacType;
@property (retain, nonatomic) NSString *privateMacType;

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
