@interface HDAWDHealthKitConcurrentCalendarItem : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char isBusy : 1; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) BOOL hasIsBusy;
@property (nonatomic) BOOL isBusy;

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
