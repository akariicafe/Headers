@interface NWAWDLibnetcoreTCPStatsReport : PBCodable <NSCopying> {
    struct { unsigned char tcpConnectionAccepts : 1; unsigned char tcpConnectionAttempts : 1; unsigned char tcpIPv4AvgRTT : 1; unsigned char tcpIPv6AvgRTT : 1; unsigned char tcpRecvPLR : 1; unsigned char tcpSendPLR : 1; unsigned char tcpSendReorderRate : 1; unsigned char tcpSendTLRTO : 1; } _has;
}

@property (nonatomic) BOOL hasTcpIPv4AvgRTT;
@property (nonatomic) unsigned long long tcpIPv4AvgRTT;
@property (nonatomic) BOOL hasTcpIPv6AvgRTT;
@property (nonatomic) unsigned long long tcpIPv6AvgRTT;
@property (nonatomic) BOOL hasTcpSendPLR;
@property (nonatomic) unsigned long long tcpSendPLR;
@property (nonatomic) BOOL hasTcpRecvPLR;
@property (nonatomic) unsigned long long tcpRecvPLR;
@property (nonatomic) BOOL hasTcpSendTLRTO;
@property (nonatomic) unsigned long long tcpSendTLRTO;
@property (nonatomic) BOOL hasTcpSendReorderRate;
@property (nonatomic) unsigned long long tcpSendReorderRate;
@property (nonatomic) BOOL hasTcpConnectionAttempts;
@property (nonatomic) unsigned long long tcpConnectionAttempts;
@property (nonatomic) BOOL hasTcpConnectionAccepts;
@property (nonatomic) unsigned long long tcpConnectionAccepts;

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
