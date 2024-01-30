@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessStatistics : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasTimerFiringCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringCount;
@property (readonly, nonatomic) BOOL hasActiveRequestCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestCount;
@property (readonly, nonatomic) BOOL hasValidLocationCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *validLocationCount;
@property (readonly, nonatomic) BOOL hasTimerFiringDelayedCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedCount;
@property (readonly, nonatomic) BOOL hasTimerFiringDelayedTotalSeconds;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedTotalSeconds;
@property (readonly, nonatomic) BOOL hasTimerFiringDelayedMaxSeconds;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedMaxSeconds;
@property (readonly, nonatomic) BOOL hasSkippedRequestDueToRecentFix;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *skippedRequestDueToRecentFix;
@property (readonly, nonatomic) BOOL hasSkippedRequestDueToStationary;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *skippedRequestDueToStationary;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithCoarseLocation;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithCoarseLocation;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithLocationServiceDisabled;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceDisabled;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithOtherReasons;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithOtherReasons;
@property (readonly, nonatomic) BOOL hasActiveRequestInterrupted;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestInterrupted;

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
