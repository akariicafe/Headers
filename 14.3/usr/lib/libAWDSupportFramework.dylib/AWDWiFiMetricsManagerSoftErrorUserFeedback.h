@interface AWDWiFiMetricsManagerSoftErrorUserFeedback : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _softErrorInstanceCounters;
    struct { int *list; unsigned long long count; unsigned long long size; } _softErrorUserConfirmationCounters;
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long softErrorInstanceCountersCount;
@property (readonly, nonatomic) int *softErrorInstanceCounters;
@property (readonly, nonatomic) unsigned long long softErrorUserConfirmationCountersCount;
@property (readonly, nonatomic) int *softErrorUserConfirmationCounters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearSoftErrorInstanceCounters;
- (int)softErrorInstanceCountersAtIndex:(unsigned long long)a0;
- (void)addSoftErrorInstanceCounters:(int)a0;
- (void)clearSoftErrorUserConfirmationCounters;
- (int)softErrorUserConfirmationCountersAtIndex:(unsigned long long)a0;
- (void)addSoftErrorUserConfirmationCounters:(int)a0;
- (void)setSoftErrorInstanceCounters:(int *)a0 count:(unsigned long long)a1;
- (void)setSoftErrorUserConfirmationCounters:(int *)a0 count:(unsigned long long)a1;

@end
