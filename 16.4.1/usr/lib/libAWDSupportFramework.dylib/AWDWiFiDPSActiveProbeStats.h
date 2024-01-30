@interface AWDWiFiDPSActiveProbeStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char rttGatewayBE : 1; unsigned char rttGatewayBK : 1; unsigned char rttGatewayVI : 1; unsigned char rttGatewayVO : 1; unsigned char rttPrimaryDnsBE : 1; unsigned char rttPrimaryDnsBK : 1; unsigned char rttPrimaryDnsVI : 1; unsigned char rttPrimaryDnsVO : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRttGatewayBE;
@property (nonatomic) unsigned int rttGatewayBE;
@property (nonatomic) BOOL hasRttGatewayBK;
@property (nonatomic) unsigned int rttGatewayBK;
@property (nonatomic) BOOL hasRttGatewayVO;
@property (nonatomic) unsigned int rttGatewayVO;
@property (nonatomic) BOOL hasRttGatewayVI;
@property (nonatomic) unsigned int rttGatewayVI;
@property (nonatomic) BOOL hasRttPrimaryDnsBE;
@property (nonatomic) unsigned int rttPrimaryDnsBE;
@property (nonatomic) BOOL hasRttPrimaryDnsBK;
@property (nonatomic) unsigned int rttPrimaryDnsBK;
@property (nonatomic) BOOL hasRttPrimaryDnsVO;
@property (nonatomic) unsigned int rttPrimaryDnsVO;
@property (nonatomic) BOOL hasRttPrimaryDnsVI;
@property (nonatomic) unsigned int rttPrimaryDnsVI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
