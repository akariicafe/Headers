@class GEOPDHours, NSString, PBDataReader;

@interface GEORPFeedbackBusinessHours : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_comments;
    unsigned long long _end;
    unsigned long long _start;
    GEOPDHours *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _hoursType;
    struct { unsigned char has_end : 1; unsigned char has_start : 1; unsigned char has_hoursType : 1; unsigned char read_comments : 1; unsigned char read_weeklyHours : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasWeeklyHours;
@property (retain, nonatomic) GEOPDHours *weeklyHours;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) unsigned long long start;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) unsigned long long end;
@property (readonly, nonatomic) BOOL hasComments;
@property (retain, nonatomic) NSString *comments;
@property (nonatomic) BOOL hasHoursType;
@property (nonatomic) int hoursType;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsHoursType:(id)a0;
- (id)hoursTypeAsString:(int)a0;

@end
