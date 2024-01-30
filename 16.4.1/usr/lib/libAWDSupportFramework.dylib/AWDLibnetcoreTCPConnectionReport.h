@class NSString, AWDLibnetcoreConnectionStatisticsReport, AWDLibnetcoreCellularFallbackReport, NSMutableArray;

@interface AWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying> {
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
@property (retain, nonatomic) AWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport;
@property (readonly, nonatomic) BOOL hasCellularFallbackReport;
@property (retain, nonatomic) AWDLibnetcoreCellularFallbackReport *cellularFallbackReport;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (retain, nonatomic) NSMutableArray *connectionAttemptStatisticsReports;
@property (readonly, nonatomic) BOOL hasSourceAppIdentifier;
@property (retain, nonatomic) NSString *sourceAppIdentifier;

+ (Class)connectionAttemptStatisticsReportsType;

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
- (int)StringAsReportReason:(id)a0;
- (void)addConnectionAttemptStatisticsReports:(id)a0;
- (void)clearConnectionAttemptStatisticsReports;
- (id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)a0;
- (unsigned long long)connectionAttemptStatisticsReportsCount;
- (id)reportReasonAsString:(int)a0;

@end
