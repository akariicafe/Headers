@class PBDataReader, NSString, GEOLatLng, NSData, NSMutableArray, PBUnknownFields;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOHighlight { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_textHighlights;
    unsigned long long _textHighlightsCount;
    unsigned long long _textHighlightsSpace;
    NSString *_calloutTitle;
    NSMutableArray *_displayLines;
    NSString *_iconID;
    GEOLatLng *_latlng;
    NSMutableArray *_namedFeatures;
    NSString *_searchQueryDisplayString;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_textHighlights : 1; unsigned char read_calloutTitle : 1; unsigned char read_displayLines : 1; unsigned char read_iconID : 1; unsigned char read_latlng : 1; unsigned char read_namedFeatures : 1; unsigned char read_searchQueryDisplayString : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *displayLines;
@property (readonly, nonatomic) unsigned long long textHighlightsCount;
@property (readonly, nonatomic) struct GEOHighlight { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *textHighlights;
@property (readonly, nonatomic) BOOL hasIconID;
@property (retain, nonatomic) NSString *iconID;
@property (readonly, nonatomic) BOOL hasLatlng;
@property (retain, nonatomic) GEOLatLng *latlng;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasSearchQueryDisplayString;
@property (retain, nonatomic) NSString *searchQueryDisplayString;
@property (readonly, nonatomic) BOOL hasCalloutTitle;
@property (retain, nonatomic) NSString *calloutTitle;
@property (retain, nonatomic) NSMutableArray *namedFeatures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)displayLineType;
+ (Class)namedFeatureType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (unsigned long long)namedFeaturesCount;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addDisplayLine:(id)a0;
- (unsigned long long)displayLinesCount;
- (void)clearDisplayLines;
- (id)displayLineAtIndex:(unsigned long long)a0;
- (void)addNamedFeature:(id)a0;
- (id)namedFeatureAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearTextHighlights;
- (void)addTextHighlights:(struct GEOHighlight { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a0;
- (struct GEOHighlight { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })textHighlightsAtIndex:(unsigned long long)a0;
- (void)setTextHighlights:(struct GEOHighlight { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a0 count:(unsigned long long)a1;
- (id)description;
- (void)clearNamedFeatures;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
