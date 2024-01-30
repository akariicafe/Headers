@interface AWDSymptomsLaunchIntervalMetric : PBCodable <NSCopying> {
    struct { unsigned char intervalSincePreviousLaunch : 1; unsigned char timestamp : 1; unsigned char process : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIntervalSincePreviousLaunch;
@property (nonatomic) unsigned long long intervalSincePreviousLaunch;
@property (nonatomic) BOOL hasProcess;
@property (nonatomic) int process;

- (id)processAsString:(int)a0;
- (int)StringAsProcess:(id)a0;
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
