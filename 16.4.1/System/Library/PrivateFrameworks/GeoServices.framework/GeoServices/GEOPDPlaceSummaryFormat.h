@class GEOMapItemIdentifier, GEOPDMapsIdentifier;

@interface GEOPDPlaceSummaryFormat : PBCodable <NSCopying> {
    GEOPDMapsIdentifier *_tapPlaceId;
    unsigned int _endIndex;
    int _formatType;
    unsigned int _startIndex;
    struct { unsigned char has_endIndex : 1; unsigned char has_formatType : 1; unsigned char has_startIndex : 1; } _flags;
}

@property (readonly, nonatomic) GEOMapItemIdentifier *tappableEntryIdentifier;
@property (nonatomic) BOOL hasFormatType;
@property (nonatomic) int formatType;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (readonly, nonatomic) BOOL hasTapPlaceId;
@property (retain, nonatomic) GEOPDMapsIdentifier *tapPlaceId;

+ (BOOL)isValid:(id)a0;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsFormatType:(id)a0;
- (id)formatTypeAsString:(int)a0;

@end
