@class AppTelemetryCiconiaInvestigation, NSString, NSData, AppTelemetryCiconiaBouncesInvestigation, AppTelemetryQBSPerformance, AppTelemetryQBSInvestigation, AppTelemetryCiconiaEAccessInvestigation, AppTelemetryFPFSMigrationInvestigation;

@interface AppTelemetryInvestigation : PBCodable <NSCopying> {
    long long _errorCode;
    unsigned long long _eventTimestamp;
    AppTelemetryCiconiaBouncesInvestigation *_bouncesInvestigation;
    AppTelemetryCiconiaInvestigation *_ciconiaInvestigation;
    AppTelemetryCiconiaEAccessInvestigation *_eaccessInvestigation;
    NSString *_errorDescription;
    NSString *_errorDomain;
    NSString *_eventGroupUUID;
    AppTelemetryFPFSMigrationInvestigation *_fpfsMigrationInvestigation;
    NSString *_itemID;
    NSString *_lastStep;
    NSString *_operationType;
    AppTelemetryQBSInvestigation *_qbsInvestigation;
    AppTelemetryQBSPerformance *_qbsPerformance;
    NSString *_reason;
    NSData *_zoneName;
    BOOL _hasForegroundClients;
    BOOL _isPCSChained;
    BOOL _nonDiscretionary;
    BOOL _sharedZone;
    struct { unsigned char errorCode : 1; unsigned char eventTimestamp : 1; unsigned char hasForegroundClients : 1; unsigned char isPCSChained : 1; unsigned char nonDiscretionary : 1; unsigned char sharedZone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSData *zoneName;
@property (nonatomic) BOOL hasSharedZone;
@property (nonatomic) BOOL sharedZone;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasLastStep;
@property (retain, nonatomic) NSString *lastStep;
@property (readonly, nonatomic) BOOL hasItemID;
@property (retain, nonatomic) NSString *itemID;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) BOOL hasNonDiscretionary;
@property (nonatomic) BOOL nonDiscretionary;
@property (nonatomic) BOOL hasHasForegroundClients;
@property (nonatomic) BOOL hasForegroundClients;
@property (nonatomic) BOOL hasIsPCSChained;
@property (nonatomic) BOOL isPCSChained;
@property (readonly, nonatomic) BOOL hasEventGroupUUID;
@property (retain, nonatomic) NSString *eventGroupUUID;
@property (readonly, nonatomic) BOOL hasCiconiaInvestigation;
@property (retain, nonatomic) AppTelemetryCiconiaInvestigation *ciconiaInvestigation;
@property (readonly, nonatomic) BOOL hasQbsInvestigation;
@property (retain, nonatomic) AppTelemetryQBSInvestigation *qbsInvestigation;
@property (readonly, nonatomic) BOOL hasQbsPerformance;
@property (retain, nonatomic) AppTelemetryQBSPerformance *qbsPerformance;
@property (readonly, nonatomic) BOOL hasBouncesInvestigation;
@property (retain, nonatomic) AppTelemetryCiconiaBouncesInvestigation *bouncesInvestigation;
@property (readonly, nonatomic) BOOL hasFpfsMigrationInvestigation;
@property (retain, nonatomic) AppTelemetryFPFSMigrationInvestigation *fpfsMigrationInvestigation;
@property (readonly, nonatomic) BOOL hasEaccessInvestigation;
@property (retain, nonatomic) AppTelemetryCiconiaEAccessInvestigation *eaccessInvestigation;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) unsigned long long eventTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
