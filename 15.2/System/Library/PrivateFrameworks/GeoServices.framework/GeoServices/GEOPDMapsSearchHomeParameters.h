@class PBDataReader, GEOPDGuidesLocationsSuggestionParameters, GEOPDCollectionSuggestionParameters, GEOPDPlaceSuggestionParameters, GEOPDPublisherSuggestionParameters, GEOPDSearchBrowseCategorySuggestionParameters, PBUnknownFields;

@interface GEOPDMapsSearchHomeParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSectionTypes;
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;
    GEOPDGuidesLocationsSuggestionParameters *_guidesLocationsSuggestionParameters;
    GEOPDPlaceSuggestionParameters *_placeSuggestionParameters;
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;
    GEOPDSearchBrowseCategorySuggestionParameters *_searchBrowseCategorySuggestionParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_supportedSectionTypes : 1; unsigned char read_collectionSuggestionParameters : 1; unsigned char read_guidesLocationsSuggestionParameters : 1; unsigned char read_placeSuggestionParameters : 1; unsigned char read_publisherSuggestionParameters : 1; unsigned char read_searchBrowseCategorySuggestionParameters : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
