@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _nextStopIds;
    struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    NSMutableArray *_departureFrequencys;
    NSMutableArray *_departures;
    NSString *_directionNameString;
    NSString *_headsignString;
    unsigned long long _lineId;
    unsigned long long _stopId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_lineId : 1; unsigned char has_stopId : 1; unsigned char read_unknownFields : 1; unsigned char read_nextStopIds : 1; unsigned char read_operatingHours : 1; unsigned char read_departureFrequencys : 1; unsigned char read_departures : 1; unsigned char read_directionNameString : 1; unsigned char read_headsignString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) BOOL hasStopId;
@property (nonatomic) unsigned long long stopId;
@property (retain, nonatomic) NSMutableArray *departures;
@property (retain, nonatomic) NSMutableArray *departureFrequencys;
@property (readonly, nonatomic) unsigned long long operatingHoursCount;
@property (readonly, nonatomic) struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *operatingHours;
@property (readonly, nonatomic) BOOL hasDirectionNameString;
@property (retain, nonatomic) NSString *directionNameString;
@property (readonly, nonatomic) BOOL hasHeadsignString;
@property (retain, nonatomic) NSString *headsignString;
@property (readonly, nonatomic) unsigned long long nextStopIdsCount;
@property (readonly, nonatomic) unsigned long long *nextStopIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)departureType;
+ (Class)departureFrequencyType;
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
- (void)addDeparture:(id)a0;
- (void)clearOperatingHours;
- (void)addDepartureFrequency:(id)a0;
- (void)addOperatingHours:(struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (void)addNextStopId:(unsigned long long)a0;
- (unsigned long long)departuresCount;
- (void)clearDepartures;
- (id)departureAtIndex:(unsigned long long)a0;
- (unsigned long long)departureFrequencysCount;
- (void)clearDepartureFrequencys;
- (id)departureFrequencyAtIndex:(unsigned long long)a0;
- (struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })operatingHoursAtIndex:(unsigned long long)a0;
- (void)clearNextStopIds;
- (unsigned long long)nextStopIdAtIndex:(unsigned long long)a0;
- (void)setOperatingHours:(struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;
- (void)setNextStopIds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
