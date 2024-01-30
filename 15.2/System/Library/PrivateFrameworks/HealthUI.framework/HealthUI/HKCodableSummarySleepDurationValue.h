@interface HKCodableSummarySleepDurationValue : PBCodable <NSCopying> {
    struct { unsigned char asleepDuration : 1; unsigned char endOfSleepTimeIntervalSinceReferenceDate : 1; unsigned char inBedDuration : 1; } _has;
}

@property (nonatomic) BOOL hasInBedDuration;
@property (nonatomic) double inBedDuration;
@property (nonatomic) BOOL hasAsleepDuration;
@property (nonatomic) double asleepDuration;
@property (nonatomic) BOOL hasEndOfSleepTimeIntervalSinceReferenceDate;
@property (nonatomic) double endOfSleepTimeIntervalSinceReferenceDate;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
