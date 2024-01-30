@interface AWDSymptomsCellularSDMTimeStatistics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char totalActiveTimeSeconds : 1; unsigned char totalInferredSleepTimeSeconds : 1; unsigned char totalQuiesceTimeSeconds : 1; unsigned char totalTimeSeconds : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTotalTimeSeconds;
@property (nonatomic) unsigned long long totalTimeSeconds;
@property (nonatomic) BOOL hasTotalActiveTimeSeconds;
@property (nonatomic) unsigned long long totalActiveTimeSeconds;
@property (nonatomic) BOOL hasTotalQuiesceTimeSeconds;
@property (nonatomic) unsigned long long totalQuiesceTimeSeconds;
@property (nonatomic) BOOL hasTotalInferredSleepTimeSeconds;
@property (nonatomic) unsigned long long totalInferredSleepTimeSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
