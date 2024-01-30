@class PBUnknownFields, NSString, GEOPDCollectionSuggestionResult, PBDataReader, GEOPDPublisherSuggestionResult, GEOPDSearchBrowseCategorySuggestionResult;

@interface GEOPDMapsSearchHomeSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;
    NSString *_name;
    GEOPDPublisherSuggestionResult *_publisherSuggestionResult;
    GEOPDSearchBrowseCategorySuggestionResult *_searchBrowseCategorySuggestionResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _sectionType;
    struct { unsigned char has_sectionType : 1; unsigned char read_unknownFields : 1; unsigned char read_collectionSuggestionResult : 1; unsigned char read_name : 1; unsigned char read_publisherSuggestionResult : 1; unsigned char read_searchBrowseCategorySuggestionResult : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) int sectionType;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSearchBrowseCategorySuggestionResult;
@property (retain, nonatomic) GEOPDSearchBrowseCategorySuggestionResult *searchBrowseCategorySuggestionResult;
@property (readonly, nonatomic) BOOL hasCollectionSuggestionResult;
@property (retain, nonatomic) GEOPDCollectionSuggestionResult *collectionSuggestionResult;
@property (readonly, nonatomic) BOOL hasPublisherSuggestionResult;
@property (retain, nonatomic) GEOPDPublisherSuggestionResult *publisherSuggestionResult;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
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
- (id)sectionTypeAsString:(int)a0;
- (int)StringAsSectionType:(id)a0;

@end
