@class PBDataReader;

@interface GEOLPRTimeCondition : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _dayOfMonths;
    struct { int *list; unsigned long long count; unsigned long long size; } _dayOfWeeks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_dayOfMonths : 1; unsigned char read_dayOfWeeks : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long dayOfWeeksCount;
@property (readonly, nonatomic) int *dayOfWeeks;
@property (readonly, nonatomic) unsigned long long dayOfMonthsCount;
@property (readonly, nonatomic) unsigned int *dayOfMonths;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addDayOfWeek:(int)a0;
- (void)addDayOfMonth:(unsigned int)a0;
- (void)clearDayOfWeeks;
- (int)dayOfWeekAtIndex:(unsigned long long)a0;
- (void)clearDayOfMonths;
- (unsigned int)dayOfMonthAtIndex:(unsigned long long)a0;
- (void)setDayOfWeeks:(int *)a0 count:(unsigned long long)a1;
- (id)dayOfWeeksAsString:(int)a0;
- (int)StringAsDayOfWeeks:(id)a0;
- (void)setDayOfMonths:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
