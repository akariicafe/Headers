@class PBDataReader, NSMutableArray, GEOLocalizedString, GEOPDHoursThreshold, PBUnknownFields;

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

+ (id)businessHoursForPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
