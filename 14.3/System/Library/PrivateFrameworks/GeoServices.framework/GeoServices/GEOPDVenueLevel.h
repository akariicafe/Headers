@class GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueLevel : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDVenueLabel *_label;
    unsigned long long _levelId;
    int _ordinal;
    struct { unsigned char has_levelId : 1; unsigned char has_ordinal : 1; } _flags;
}

@property (nonatomic) BOOL hasLevelId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) BOOL hasOrdinal;
@property (nonatomic) int ordinal;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
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
