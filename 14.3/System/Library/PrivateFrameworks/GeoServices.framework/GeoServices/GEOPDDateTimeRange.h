@class PBUnknownFields;

@interface GEOPDDateTimeRange : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    unsigned long long _endDate;
    unsigned long long _startDate;
    struct { unsigned char has_endDate : 1; unsigned char has_startDate : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasValidStartAndEndDates;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) unsigned long long endDate;
@property (readonly, nonatomic) unsigned long long timeRangesCount;
@property (readonly, nonatomic) struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *timeRanges;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })timeRangeAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addTimeRange:(struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearTimeRanges;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;

@end
