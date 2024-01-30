@class GEOPDViewportInfo, PBDataReader, GEOPDVenueIdentifier, PBUnknownFields;

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _engineTypes;
    double _requestLocalTimestamp;
    GEOPDVenueIdentifier *_venueFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _minimumNumberOfCategories;
    int _preferredTransportType;
    int _suggestionType;
    BOOL _isCarplayRequest;
    BOOL _isFlatCategoryListRequest;
    BOOL _isFromNoQueryState;
    BOOL _isWidgetRequest;
    struct { unsigned char has_requestLocalTimestamp : 1; unsigned char has_minimumNumberOfCategories : 1; unsigned char has_preferredTransportType : 1; unsigned char has_suggestionType : 1; unsigned char has_isCarplayRequest : 1; unsigned char has_isFlatCategoryListRequest : 1; unsigned char has_isFromNoQueryState : 1; unsigned char has_isWidgetRequest : 1; unsigned char read_unknownFields : 1; unsigned char read_engineTypes : 1; unsigned char read_venueFilter : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic) BOOL hasMinimumNumberOfCategories;
@property (nonatomic) int minimumNumberOfCategories;
@property (nonatomic) BOOL hasIsCarplayRequest;
@property (nonatomic) BOOL isCarplayRequest;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) int suggestionType;
@property (readonly, nonatomic) unsigned long long engineTypesCount;
@property (readonly, nonatomic) int *engineTypes;
@property (readonly, nonatomic) BOOL hasVenueFilter;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueFilter;
@property (nonatomic) BOOL hasIsFromNoQueryState;
@property (nonatomic) BOOL isFromNoQueryState;
@property (nonatomic) BOOL hasIsFlatCategoryListRequest;
@property (nonatomic) BOOL isFlatCategoryListRequest;
@property (nonatomic) BOOL hasPreferredTransportType;
@property (nonatomic) int preferredTransportType;
@property (nonatomic) BOOL hasIsWidgetRequest;
@property (nonatomic) BOOL isWidgetRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)suggestionTypeAsString:(int)a0;
- (int)StringAsSuggestionType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)preferredTransportTypeAsString:(int)a0;
- (int)StringAsPreferredTransportType:(id)a0;
- (void)addEngineType:(int)a0;
- (void)clearEngineTypes;
- (int)engineTypeAtIndex:(unsigned long long)a0;
- (void)setEngineTypes:(int *)a0 count:(unsigned long long)a1;
- (id)engineTypesAsString:(int)a0;
- (int)StringAsEngineTypes:(id)a0;

@end
