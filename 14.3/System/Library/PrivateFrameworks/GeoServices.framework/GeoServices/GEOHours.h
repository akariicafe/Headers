@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOHours : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _days;
    NSMutableArray *_timeRanges;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_days : 1; unsigned char read_timeRanges : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long daysCount;
@property (readonly, nonatomic) int *days;
@property (retain, nonatomic) NSMutableArray *timeRanges;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)timeRangeType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)addDay:(int)a0;
- (id)jsonRepresentation;
- (id)timeRangeAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (int)dayAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addTimeRange:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearDays;
- (id)initWithDictionary:(id)a0;
- (void)setDays:(int *)a0 count:(unsigned long long)a1;
- (unsigned long long)timeRangesCount;
- (id)initWithPlaceDataHours:(id)a0;
- (void)clearTimeRanges;
- (id)daysAsString:(int)a0;
- (int)StringAsDays:(id)a0;

@end
