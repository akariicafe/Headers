@interface HDAWDHealthKitNotificationView : PBCodable <NSCopying> {
    struct { unsigned char dwelltimeMs : 1; unsigned char endDate : 1; unsigned char startDate : 1; unsigned char dismissReason : 1; unsigned char scrollBehavior : 1; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) BOOL hasDwelltimeMs;
@property (nonatomic) unsigned long long dwelltimeMs;
@property (nonatomic) BOOL hasDismissReason;
@property (nonatomic) int dismissReason;
@property (nonatomic) BOOL hasScrollBehavior;
@property (nonatomic) int scrollBehavior;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)dismissReasonAsString:(int)a0;
- (int)StringAsDismissReason:(id)a0;
- (id)scrollBehaviorAsString:(int)a0;
- (int)StringAsScrollBehavior:(id)a0;

@end
