@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying> {
    struct { unsigned char startTimeSecondsAfterLocalMidnight : 1; unsigned char startTimeSecondsAfterUnixEpoch : 1; unsigned char allowedRequestCount : 1; unsigned char intervalLengthSec : 1; unsigned char repeatEverySec : 1; } _has;
}

@property (nonatomic) BOOL hasIntervalLengthSec;
@property (nonatomic) int intervalLengthSec;
@property (nonatomic) BOOL hasAllowedRequestCount;
@property (nonatomic) int allowedRequestCount;
@property (nonatomic) BOOL hasRepeatEverySec;
@property (nonatomic) int repeatEverySec;
@property (nonatomic) BOOL hasStartTimeSecondsAfterUnixEpoch;
@property (nonatomic) long long startTimeSecondsAfterUnixEpoch;
@property (nonatomic) BOOL hasStartTimeSecondsAfterLocalMidnight;
@property (nonatomic) long long startTimeSecondsAfterLocalMidnight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
