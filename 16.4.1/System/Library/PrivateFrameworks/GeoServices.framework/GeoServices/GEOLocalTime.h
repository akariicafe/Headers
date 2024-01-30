@class NSString, PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_humanReadable;
    unsigned long long _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct { unsigned char has_timeRoundedToHour : 1; unsigned char has_timezoneOffsetFromGmtInHours : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasHumanReadable;
@property (retain, nonatomic) NSString *humanReadable;
@property (nonatomic) BOOL hasTimeRoundedToHour;
@property (nonatomic) unsigned long long timeRoundedToHour;
@property (nonatomic) BOOL hasTimezoneOffsetFromGmtInHours;
@property (nonatomic) float timezoneOffsetFromGmtInHours;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)initWithCFAbsoluteTime:(double)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;

@end
