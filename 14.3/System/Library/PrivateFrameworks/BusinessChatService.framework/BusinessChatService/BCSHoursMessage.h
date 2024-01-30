@class NSMutableArray;

@interface BCSHoursMessage : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _days;
}

@property (readonly, nonatomic) unsigned long long daysCount;
@property (readonly, nonatomic) int *days;
@property (retain, nonatomic) NSMutableArray *timeRanges;

+ (Class)timeRangeType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)addDay:(int)a0;
- (id)timeRangeAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (int)dayAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addTimeRange:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearDays;
- (void)setDays:(int *)a0 count:(unsigned long long)a1;
- (unsigned long long)timeRangesCount;
- (void)clearTimeRanges;
- (id)daysAsString:(int)a0;
- (int)StringAsDays:(id)a0;

@end
