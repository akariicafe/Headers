@class GEOPDHoursThreshold, PBDataReader, PBUnknownFields;

@interface GEOPDHours : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _days;
    struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    GEOPDHoursThreshold *_hoursThreshold;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_days : 1; unsigned char read_timeRanges : 1; unsigned char read_hoursThreshold : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long daysCount;
@property (readonly, nonatomic) int *days;
@property (readonly, nonatomic) unsigned long long timeRangesCount;
@property (readonly, nonatomic) struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *timeRanges;
@property (readonly, nonatomic) BOOL hasHoursThreshold;
@property (retain, nonatomic) GEOPDHoursThreshold *hoursThreshold;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)_allHoursForPlaceData:(id)a0;
+ (BOOL)operatingHoursAvailableForPlaceData:(id)a0;
+ (id)completeOperatingHoursForPlaceData:(id)a0 withTimeZone:(id)a1;
+ (BOOL)currentOperatingHoursAvailableForPlaceData:(id)a0 withTimeZone:(id)a1;
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
- (struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })timeRangeAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (int)dayAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addTimeRange:(struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearDays;
- (id)initWithDictionary:(id)a0;
- (void)setDays:(int *)a0 count:(unsigned long long)a1;
- (void)clearTimeRanges;
- (id)daysAsString:(int)a0;
- (int)StringAsDays:(id)a0;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;

@end
