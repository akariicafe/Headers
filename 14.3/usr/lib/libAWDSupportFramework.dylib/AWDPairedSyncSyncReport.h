@class NSString;

@interface AWDPairedSyncSyncReport : PBCodable <NSCopying> {
    struct { unsigned char syncDuration : 1; unsigned char timestamp : 1; unsigned char defaultByteCount : 1; unsigned char recordCount : 1; unsigned char syncByteCount : 1; unsigned char syncErrorCode : 1; unsigned char syncType : 1; unsigned char timeoutCount : 1; unsigned char urgentByteCount : 1; unsigned char isAutomated : 1; unsigned char sawADropout : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIsAutomated;
@property (nonatomic) BOOL isAutomated;
@property (readonly, nonatomic) BOOL hasGizmoBuild;
@property (retain, nonatomic) NSString *gizmoBuild;
@property (readonly, nonatomic) BOOL hasGizmoHardware;
@property (retain, nonatomic) NSString *gizmoHardware;
@property (nonatomic) BOOL hasSyncDuration;
@property (nonatomic) unsigned long long syncDuration;
@property (readonly, nonatomic) BOOL hasActivityName;
@property (retain, nonatomic) NSString *activityName;
@property (nonatomic) BOOL hasSyncErrorCode;
@property (nonatomic) unsigned int syncErrorCode;
@property (nonatomic) BOOL hasTimeoutCount;
@property (nonatomic) unsigned int timeoutCount;
@property (nonatomic) BOOL hasSyncType;
@property (nonatomic) unsigned int syncType;
@property (nonatomic) BOOL hasRecordCount;
@property (nonatomic) unsigned int recordCount;
@property (nonatomic) BOOL hasSyncByteCount;
@property (nonatomic) unsigned int syncByteCount;
@property (nonatomic) BOOL hasDefaultByteCount;
@property (nonatomic) unsigned int defaultByteCount;
@property (nonatomic) BOOL hasUrgentByteCount;
@property (nonatomic) unsigned int urgentByteCount;
@property (nonatomic) BOOL hasSawADropout;
@property (nonatomic) BOOL sawADropout;

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

@end
