@class NWAWDLibnetcoreNetworkdStatsReport, NWAWDLibnetcoreMbufStatsReport, NWAWDNWAPIUsage, NWAWDLibnetcoreMPTCPStatsReport, NWAWDLibnetcoreTCPStatsReport, NSMutableArray, NWAWDLibnetcoreTCPTFOStatsReport, NWAWDLibnetcoreTCPECNStatsReport;

@interface NWAWDLibnetcoreStatsReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char reportReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasReportReason;
@property (nonatomic) unsigned int reportReason;
@property (readonly, nonatomic) BOOL hasMbufStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreMbufStatsReport *mbufStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreTCPStatsReport *tcpStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpECNStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreTCPECNStatsReport *tcpECNStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpTFOStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreTCPTFOStatsReport *tcpTFOStatisticsReport;
@property (readonly, nonatomic) BOOL hasNetworkdStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreNetworkdStatsReport *networkdStatisticsReport;
@property (retain, nonatomic) NSMutableArray *tcpECNInterfaceReports;
@property (readonly, nonatomic) BOOL hasNwAPIUsageReport;
@property (retain, nonatomic) NWAWDNWAPIUsage *nwAPIUsageReport;
@property (readonly, nonatomic) BOOL hasMptcpStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreMPTCPStatsReport *mptcpStatisticsReport;

+ (Class)tcpECNInterfaceReportType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearTcpECNInterfaceReports;
- (void)addTcpECNInterfaceReport:(id)a0;
- (unsigned long long)tcpECNInterfaceReportsCount;
- (id)tcpECNInterfaceReportAtIndex:(unsigned long long)a0;

@end
