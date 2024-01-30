@class PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct { unsigned char has_timeRoundedToHour : 1; unsigned char has_timezoneOffsetFromGmtInHours : 1; } _flags;
}

@property (nonatomic) BOOL hasTimeRoundedToHour;
@property (nonatomic) unsigned long long timeRoundedToHour;
@property (nonatomic) BOOL hasTimezoneOffsetFromGmtInHours;
@property (nonatomic) float timezoneOffsetFromGmtInHours;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithCFAbsoluteTime:(double)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
