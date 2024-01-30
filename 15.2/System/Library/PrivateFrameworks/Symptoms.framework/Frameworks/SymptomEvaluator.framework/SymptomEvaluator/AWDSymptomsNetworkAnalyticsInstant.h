@class NSString;

@interface AWDSymptomsNetworkAnalyticsInstant : PBCodable <NSCopying> {
    struct { unsigned char bytesIn : 1; unsigned char bytesOut : 1; unsigned char connAttempts : 1; unsigned char connSuccess : 1; unsigned char cumulInternetOutageSecs : 1; unsigned char lastReportedL2TxFail : 1; unsigned char lastReportedL2TxFrames : 1; unsigned char lastReportedL2TxReTry : 1; unsigned char packetsIn : 1; unsigned char packetsOut : 1; unsigned char rttMinUsecs : 1; unsigned char timestamp : 1; unsigned char arpThreshold : 1; unsigned char dnsServers : 1; unsigned char lastReportedLQM : 1; unsigned char lastReportedRSSI : 1; unsigned char networkType : 1; unsigned char penalizedDnsServers : 1; unsigned char rxSignalThreshold : 1; unsigned char arpThresholded : 1; unsigned char hasInternetConn : 1; unsigned char rxSignalThresholded : 1; unsigned char supportsIPv4 : 1; unsigned char supportsIPv6 : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasHasInternetConn;
@property (nonatomic) BOOL hasInternetConn;
@property (nonatomic) BOOL hasCumulInternetOutageSecs;
@property (nonatomic) unsigned long long cumulInternetOutageSecs;
@property (nonatomic) BOOL hasConnAttempts;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) BOOL hasConnSuccess;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) BOOL hasRttMinUsecs;
@property (nonatomic) unsigned long long rttMinUsecs;
@property (nonatomic) BOOL hasDnsServers;
@property (nonatomic) unsigned int dnsServers;
@property (nonatomic) BOOL hasPenalizedDnsServers;
@property (nonatomic) unsigned int penalizedDnsServers;
@property (nonatomic) BOOL hasRxSignalThreshold;
@property (nonatomic) unsigned int rxSignalThreshold;
@property (nonatomic) BOOL hasRxSignalThresholded;
@property (nonatomic) BOOL rxSignalThresholded;
@property (nonatomic) BOOL hasArpThreshold;
@property (nonatomic) unsigned int arpThreshold;
@property (nonatomic) BOOL hasArpThresholded;
@property (nonatomic) BOOL arpThresholded;
@property (nonatomic) BOOL hasSupportsIPv4;
@property (nonatomic) BOOL supportsIPv4;
@property (nonatomic) BOOL hasSupportsIPv6;
@property (nonatomic) BOOL supportsIPv6;
@property (nonatomic) BOOL hasLastReportedRSSI;
@property (nonatomic) unsigned int lastReportedRSSI;
@property (nonatomic) BOOL hasLastReportedLQM;
@property (nonatomic) int lastReportedLQM;
@property (nonatomic) BOOL hasLastReportedL2TxFrames;
@property (nonatomic) unsigned long long lastReportedL2TxFrames;
@property (nonatomic) BOOL hasLastReportedL2TxReTry;
@property (nonatomic) unsigned long long lastReportedL2TxReTry;
@property (nonatomic) BOOL hasLastReportedL2TxFail;
@property (nonatomic) unsigned long long lastReportedL2TxFail;

- (id)networkTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsNetworkType:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
