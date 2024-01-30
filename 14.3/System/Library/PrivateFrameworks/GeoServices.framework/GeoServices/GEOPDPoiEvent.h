@class PBDataReader, GEOPDMapsIdentifier, GEOLocalizedString, GEOTimezone, NSMutableArray, PBUnknownFields;

@interface GEOPDPoiEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _expectedAttendance;
    struct { unsigned char has_expectedAttendance : 1; unsigned char read_unknownFields : 1; unsigned char read_eventCategorys : 1; unsigned char read_eventDateTimes : 1; unsigned char read_eventId : 1; unsigned char read_name : 1; unsigned char read_performers : 1; unsigned char read_poiIds : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) GEOLocalizedString *name;
@property (retain, nonatomic) NSMutableArray *eventCategorys;
@property (retain, nonatomic) NSMutableArray *poiIds;
@property (retain, nonatomic) NSMutableArray *eventDateTimes;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (retain, nonatomic) NSMutableArray *performers;
@property (nonatomic) BOOL hasExpectedAttendance;
@property (nonatomic) int expectedAttendance;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)poiIdType;
+ (Class)performerType;
+ (Class)eventCategoryType;
+ (Class)eventDateTimeType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addPoiId:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEventCategory:(id)a0;
- (void)addEventDateTime:(id)a0;
- (void)addPerformer:(id)a0;
- (unsigned long long)poiIdsCount;
- (unsigned long long)eventCategorysCount;
- (void)clearEventCategorys;
- (id)eventCategoryAtIndex:(unsigned long long)a0;
- (void)clearPoiIds;
- (id)poiIdAtIndex:(unsigned long long)a0;
- (unsigned long long)eventDateTimesCount;
- (void)clearEventDateTimes;
- (id)eventDateTimeAtIndex:(unsigned long long)a0;
- (unsigned long long)performersCount;
- (void)clearPerformers;
- (id)performerAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
