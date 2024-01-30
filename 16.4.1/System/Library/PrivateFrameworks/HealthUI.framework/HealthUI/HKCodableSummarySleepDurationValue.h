@interface HKCodableSummarySleepDurationValue : PBCodable <NSCopying> {
    struct APPLE_134 { unsigned char asleepDuration : 1; unsigned char endOfSleepTimeIntervalSinceReferenceDate : 1; unsigned char inBedDuration : 1; } _has;
}

@property (nonatomic) BOOL hasInBedDuration;
@property (nonatomic) double inBedDuration;
@property (nonatomic) BOOL hasAsleepDuration;
@property (nonatomic) double asleepDuration;
@property (nonatomic) BOOL hasEndOfSleepTimeIntervalSinceReferenceDate;
@property (nonatomic) double endOfSleepTimeIntervalSinceReferenceDate;

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
