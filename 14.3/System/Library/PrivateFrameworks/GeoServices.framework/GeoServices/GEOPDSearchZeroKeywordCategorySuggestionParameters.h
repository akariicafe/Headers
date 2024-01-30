@class GEOLatLng, PBUnknownFields;

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    GEOLatLng *_significantLocation;
    unsigned int _maxNumCategoriesPerEntry;
    int _userPreferredTransportType;
    BOOL _shouldMatchNoQueryStateSuggestions;
    struct { unsigned char has_requestLocalTimestamp : 1; unsigned char has_maxNumCategoriesPerEntry : 1; unsigned char has_userPreferredTransportType : 1; unsigned char has_shouldMatchNoQueryStateSuggestions : 1; } _flags;
}

@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (nonatomic) double requestLocalTimestamp;
@property (readonly, nonatomic) BOOL hasSignificantLocation;
@property (retain, nonatomic) GEOLatLng *significantLocation;
@property (nonatomic) BOOL hasMaxNumCategoriesPerEntry;
@property (nonatomic) unsigned int maxNumCategoriesPerEntry;
@property (nonatomic) BOOL hasUserPreferredTransportType;
@property (nonatomic) int userPreferredTransportType;
@property (nonatomic) BOOL hasShouldMatchNoQueryStateSuggestions;
@property (nonatomic) BOOL shouldMatchNoQueryStateSuggestions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)userPreferredTransportTypeAsString:(int)a0;
- (int)StringAsUserPreferredTransportType:(id)a0;
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
