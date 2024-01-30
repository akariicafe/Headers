@class NSString, AppTelemetryInvestigation;

@interface AppTelemetryTimeSeriesEvent : PBCodable <PQLValuable, NSCopying> {
    struct { unsigned char magnitudeDouble : 1; unsigned char timestamp : 1; unsigned char magnitude : 1; unsigned char magnitudeFloat : 1; unsigned char magnitudeInt : 1; unsigned char magnitudeBool : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) BOOL hasMagnitudeFloat;
@property (nonatomic) float magnitudeFloat;
@property (nonatomic) BOOL hasMagnitudeDouble;
@property (nonatomic) double magnitudeDouble;
@property (nonatomic) BOOL hasMagnitudeInt;
@property (nonatomic) int magnitudeInt;
@property (nonatomic) BOOL hasMagnitudeBool;
@property (nonatomic) BOOL magnitudeBool;
@property (nonatomic) BOOL hasMagnitude;
@property (nonatomic) int magnitude;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasInvestigation;
@property (retain, nonatomic) AppTelemetryInvestigation *investigation;

+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;
+ (id)newDBResetEventWithError:(id)a0 description:(id)a1;
+ (id)newPermanentlyInconsistentEventWithZoneMangledID:(id)a0;
+ (id)newSyncUpBackoffRatioEventWithRatio:(float)a0 zoneMangledID:(id)a1;
+ (id)newSyncUpBackoffDelayEventWithBackoff:(float)a0 zoneMangledID:(id)a1;
+ (id)newDroppedEventWithCount:(unsigned int)a0;
+ (id)newShareAliasInSharedFolderEventWithZoneMangledID:(id)a0;
+ (id)newFolderSharingCountMismatchEventWithCount:(int)a0 zoneMangledID:(id)a1;
+ (id)newMissingApplyJobEventWithNumberMissing:(unsigned int)a0;
+ (id)newMissingDownloaderJobEventWithNumberMissing:(unsigned int)a0;
+ (id)newZoneResetEventWithZoneMangledID:(id)a0 lastSyncDate:(id)a1 error:(id)a2 errorDescription:(id)a3;
+ (id)newTelemetryEventInZoneWithMangledID:(id)a0 fromError:(id)a1 errorDescription:(id)a2;
+ (id)newTelemetryEventInZoneWithMangledID:(id)a0;
+ (id)newMissingPushEventWithNumberOutOfSync:(unsigned int)a0 zoneMangledID:(id)a1;
+ (id)newTestMetricEventWithMagnitude:(unsigned int)a0;
+ (id)newMissingSyncUpJobEventWithNumberMissing:(unsigned int)a0;
+ (id)newMissingUploaderJobEventWithNumberMissing:(unsigned int)a0;
+ (id)newMissingReaderJobEventWithNumberMissing:(unsigned int)a0;

- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearOneofValuesForMagnitude;
- (id)magnitudeAsString:(int)a0;
- (int)StringAsMagnitude:(id)a0;

@end
