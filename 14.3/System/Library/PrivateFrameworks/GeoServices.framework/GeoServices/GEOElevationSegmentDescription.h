@class GEOFormattedString, PBUnknownFields;

@interface GEOElevationSegmentDescription : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_formattedDescription;
    unsigned int _endOffsetM;
    unsigned int _startOffsetM;
    struct { unsigned char has_endOffsetM : 1; unsigned char has_startOffsetM : 1; } _flags;
}

@property (nonatomic) BOOL hasStartOffsetM;
@property (nonatomic) unsigned int startOffsetM;
@property (nonatomic) BOOL hasEndOffsetM;
@property (nonatomic) unsigned int endOffsetM;
@property (readonly, nonatomic) BOOL hasFormattedDescription;
@property (retain, nonatomic) GEOFormattedString *formattedDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
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
