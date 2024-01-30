@class AWDNWActivity, AWDNWL2Report, AWDNWDeviceReport;

@interface AWDNWActivityEpilogue : PBCodable <NSCopying> {
    struct { unsigned char durationMsecs : 1; unsigned char fragmentsQuenched : 1; unsigned char timestamp : 1; unsigned char completionReason : 1; unsigned char underlyingErrorCode : 1; unsigned char underlyingErrorDomain : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasActivity;
@property (retain, nonatomic) AWDNWActivity *activity;
@property (nonatomic) BOOL hasDurationMsecs;
@property (nonatomic) unsigned long long durationMsecs;
@property (nonatomic) BOOL hasFragmentsQuenched;
@property (nonatomic) unsigned long long fragmentsQuenched;
@property (nonatomic) BOOL hasCompletionReason;
@property (nonatomic) int completionReason;
@property (readonly, nonatomic) BOOL hasL2Report;
@property (retain, nonatomic) AWDNWL2Report *l2Report;
@property (readonly, nonatomic) BOOL hasDeviceReport;
@property (retain, nonatomic) AWDNWDeviceReport *deviceReport;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) int underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) int underlyingErrorCode;

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
- (id)completionReasonAsString:(int)a0;
- (int)StringAsCompletionReason:(id)a0;

@end
