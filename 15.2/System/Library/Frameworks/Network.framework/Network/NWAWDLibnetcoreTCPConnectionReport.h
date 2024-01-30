@class NWAWDLibnetcoreConnectionStatisticsReport, NSString, NSMutableArray, NWAWDLibnetcoreCellularFallbackReport;

@interface NWAWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying> {
    struct { unsigned char iPAddressAttemptCount : 1; unsigned char timestamp : 1; unsigned char reportReason : 1; unsigned char delegated : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL hasDelegated;
@property (nonatomic) BOOL delegated;
@property (nonatomic) BOOL hasReportReason;
@property (nonatomic) int reportReason;
@property (readonly, nonatomic) BOOL hasConnectionStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport;
@property (readonly, nonatomic) BOOL hasCellularFallbackReport;
@property (retain, nonatomic) NWAWDLibnetcoreCellularFallbackReport *cellularFallbackReport;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (retain, nonatomic) NSMutableArray *connectionAttemptStatisticsReports;
@property (readonly, nonatomic) BOOL hasSourceAppIdentifier;
@property (retain, nonatomic) NSString *sourceAppIdentifier;

+ (Class)connectionAttemptStatisticsReportsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)reportReasonAsString:(int)a0;
- (int)StringAsReportReason:(id)a0;
- (void)clearConnectionAttemptStatisticsReports;
- (void)addConnectionAttemptStatisticsReports:(id)a0;
- (unsigned long long)connectionAttemptStatisticsReportsCount;
- (id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)a0;

@end
