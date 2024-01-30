@class PBUnknownFields, PBDataReader, GEOLocalizedString, NSMutableArray, GEOPDHoursThreshold;

@interface GEOPDBusinessHours : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _end;
    GEOPDHoursThreshold *_hoursThreshold;
    GEOLocalizedString *_message;
    GEOLocalizedString *_shortMessage;
    unsigned long long _start;
    NSMutableArray *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _hoursType;
    struct { unsigned char has_end : 1; unsigned char has_start : 1; unsigned char has_hoursType : 1; unsigned char read_unknownFields : 1; unsigned char read_hoursThreshold : 1; unsigned char read_message : 1; unsigned char read_shortMessage : 1; unsigned char read_weeklyHours : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *weeklyHours;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) unsigned long long start;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) unsigned long long end;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) GEOLocalizedString *message;
@property (readonly, nonatomic) BOOL hasShortMessage;
@property (retain, nonatomic) GEOLocalizedString *shortMessage;
@property (nonatomic) BOOL hasHoursType;
@property (nonatomic) int hoursType;
@property (readonly, nonatomic) BOOL hasHoursThreshold;
@property (retain, nonatomic) GEOPDHoursThreshold *hoursThreshold;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)weeklyHoursType;
+ (id)businessHoursForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addWeeklyHours:(id)a0;
- (unsigned long long)weeklyHoursCount;
- (void)clearWeeklyHours;
- (id)weeklyHoursAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)hoursTypeAsString:(int)a0;
- (int)StringAsHoursType:(id)a0;
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
