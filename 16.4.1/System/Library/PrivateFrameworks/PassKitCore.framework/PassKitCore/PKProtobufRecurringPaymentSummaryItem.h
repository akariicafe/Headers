@interface PKProtobufRecurringPaymentSummaryItem : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char intervalCount : 1; unsigned char intervalUnit : 1; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasIntervalUnit;
@property (nonatomic) unsigned int intervalUnit;
@property (nonatomic) BOOL hasIntervalCount;
@property (nonatomic) unsigned int intervalCount;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;

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
