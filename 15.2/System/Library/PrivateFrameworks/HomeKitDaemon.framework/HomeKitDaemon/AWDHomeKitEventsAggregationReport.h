@class NSString;

@interface AWDHomeKitEventsAggregationReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char acceptedXPCRequestsCount : 1; unsigned char activeDay : 1; unsigned char activeDaysPerMonthCount : 1; unsigned char averageSampledProcessMemoryUsage : 1; unsigned char erroredXPCRequestsCount : 1; unsigned char filteredXPCNotificationsCount : 1; unsigned char hapBTLEConnectionPerReasonsCount : 1; unsigned char hapBTLEConnectionsCount : 1; unsigned char hapBTLEDiscoveriesCount : 1; unsigned char hapIPInvalidationCount : 1; unsigned char hapIPReceivedHTTPEventCount : 1; unsigned char hapIPReceivedHTTPResponsesCount : 1; unsigned char hapIPSentHTTPRequestsCount : 1; unsigned char jetsamReasonHighwaterCount : 1; unsigned char jetsamReasonOtherCount : 1; unsigned char jetsamReasonProcessLimitCount : 1; unsigned char jetsamReasonUnknownKillCount : 1; unsigned char peakSampledProcessMemoryUsage : 1; unsigned char processLaunchCount : 1; unsigned char processMemoryPressureStateCriticalCount : 1; unsigned char processMemoryPressureStateWarningCount : 1; unsigned char remoteMessagesReceivedCount : 1; unsigned char remoteMessagesSentCount : 1; unsigned char sentXPCNotificationsCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasDataSyncState;
@property (retain, nonatomic) NSString *dataSyncState;
@property (nonatomic) BOOL hasProcessLaunchCount;
@property (nonatomic) unsigned int processLaunchCount;
@property (nonatomic) BOOL hasJetsamReasonHighwaterCount;
@property (nonatomic) unsigned int jetsamReasonHighwaterCount;
@property (nonatomic) BOOL hasJetsamReasonProcessLimitCount;
@property (nonatomic) unsigned int jetsamReasonProcessLimitCount;
@property (nonatomic) BOOL hasJetsamReasonUnknownKillCount;
@property (nonatomic) unsigned int jetsamReasonUnknownKillCount;
@property (nonatomic) BOOL hasJetsamReasonOtherCount;
@property (nonatomic) unsigned int jetsamReasonOtherCount;
@property (nonatomic) BOOL hasProcessMemoryPressureStateWarningCount;
@property (nonatomic) unsigned int processMemoryPressureStateWarningCount;
@property (nonatomic) BOOL hasProcessMemoryPressureStateCriticalCount;
@property (nonatomic) unsigned int processMemoryPressureStateCriticalCount;
@property (nonatomic) BOOL hasAverageSampledProcessMemoryUsage;
@property (nonatomic) unsigned int averageSampledProcessMemoryUsage;
@property (nonatomic) BOOL hasPeakSampledProcessMemoryUsage;
@property (nonatomic) unsigned int peakSampledProcessMemoryUsage;
@property (nonatomic) BOOL hasRemoteMessagesSentCount;
@property (nonatomic) unsigned int remoteMessagesSentCount;
@property (nonatomic) BOOL hasRemoteMessagesReceivedCount;
@property (nonatomic) unsigned int remoteMessagesReceivedCount;
@property (nonatomic) BOOL hasAcceptedXPCRequestsCount;
@property (nonatomic) unsigned int acceptedXPCRequestsCount;
@property (nonatomic) BOOL hasErroredXPCRequestsCount;
@property (nonatomic) unsigned int erroredXPCRequestsCount;
@property (nonatomic) BOOL hasSentXPCNotificationsCount;
@property (nonatomic) unsigned int sentXPCNotificationsCount;
@property (nonatomic) BOOL hasFilteredXPCNotificationsCount;
@property (nonatomic) unsigned int filteredXPCNotificationsCount;
@property (nonatomic) BOOL hasHapIPInvalidationCount;
@property (nonatomic) unsigned int hapIPInvalidationCount;
@property (nonatomic) BOOL hasHapIPSentHTTPRequestsCount;
@property (nonatomic) unsigned int hapIPSentHTTPRequestsCount;
@property (nonatomic) BOOL hasHapIPReceivedHTTPResponsesCount;
@property (nonatomic) unsigned int hapIPReceivedHTTPResponsesCount;
@property (nonatomic) BOOL hasHapIPReceivedHTTPEventCount;
@property (nonatomic) unsigned int hapIPReceivedHTTPEventCount;
@property (nonatomic) BOOL hasHapBTLEConnectionsCount;
@property (nonatomic) unsigned int hapBTLEConnectionsCount;
@property (nonatomic) BOOL hasHapBTLEConnectionPerReasonsCount;
@property (nonatomic) unsigned int hapBTLEConnectionPerReasonsCount;
@property (nonatomic) BOOL hasHapBTLEDiscoveriesCount;
@property (nonatomic) unsigned int hapBTLEDiscoveriesCount;
@property (nonatomic) BOOL hasActiveDay;
@property (nonatomic) unsigned int activeDay;
@property (nonatomic) BOOL hasActiveDaysPerMonthCount;
@property (nonatomic) unsigned int activeDaysPerMonthCount;

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

@end
