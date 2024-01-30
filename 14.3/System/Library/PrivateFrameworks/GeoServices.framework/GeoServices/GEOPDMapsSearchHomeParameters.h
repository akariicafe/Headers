@class PBUnknownFields, PBDataReader, GEOPDCollectionSuggestionParameters, GEOPDSearchBrowseCategorySuggestionParameters, GEOPDPublisherSuggestionParameters;

@interface GEOPDMapsSearchHomeParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSectionTypes;
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;
    GEOPDSearchBrowseCategorySuggestionParameters *_searchBrowseCategorySuggestionParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_supportedSectionTypes : 1; unsigned char read_collectionSuggestionParameters : 1; unsigned char read_publisherSuggestionParameters : 1; unsigned char read_searchBrowseCategorySuggestionParameters : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long supportedSectionTypesCount;
@property (readonly, nonatomic) int *supportedSectionTypes;
@property (readonly, nonatomic) BOOL hasSearchBrowseCategorySuggestionParameters;
@property (retain, nonatomic) GEOPDSearchBrowseCategorySuggestionParameters *searchBrowseCategorySuggestionParameters;
@property (readonly, nonatomic) BOOL hasCollectionSuggestionParameters;
@property (retain, nonatomic) GEOPDCollectionSuggestionParameters *collectionSuggestionParameters;
@property (readonly, nonatomic) BOOL hasPublisherSuggestionParameters;
@property (retain, nonatomic) GEOPDPublisherSuggestionParameters *publisherSuggestionParameters;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addSupportedSectionType:(int)a0;
- (void)clearSupportedSectionTypes;
- (int)supportedSectionTypeAtIndex:(unsigned long long)a0;
- (void)setSupportedSectionTypes:(int *)a0 count:(unsigned long long)a1;
- (id)supportedSectionTypesAsString:(int)a0;
- (int)StringAsSupportedSectionTypes:(id)a0;

@end
