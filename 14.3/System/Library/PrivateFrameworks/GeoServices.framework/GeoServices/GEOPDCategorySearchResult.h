@class GEOPDSearchClientBehavior, GEOPDSCategorySearchResultSection, PBUnknownFields, PBDataReader, GEOMapRegion, NSMutableArray, GEOPDRelatedSearchSuggestion;

@interface GEOPDCategorySearchResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
    GEOPDSCategorySearchResultSection *_categorySearchResultSection;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedEntitySections;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchTierMetadatas;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _enablePartialClientization;
    BOOL _isChainResultSet;
    struct { unsigned char has_enablePartialClientization : 1; unsigned char has_isChainResultSet : 1; unsigned char read_unknownFields : 1; unsigned char read_browseCategorys : 1; unsigned char read_categorySearchResultSection : 1; unsigned char read_defaultRelatedSearchSuggestion : 1; unsigned char read_displayMapRegion : 1; unsigned char read_relatedEntitySections : 1; unsigned char read_relatedSearchSuggestions : 1; unsigned char read_resultDetourInfos : 1; unsigned char read_searchClientBehavior : 1; unsigned char read_searchTierMetadatas : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (nonatomic) BOOL hasIsChainResultSet;
@property (nonatomic) BOOL isChainResultSet;
@property (retain, nonatomic) NSMutableArray *relatedSearchSuggestions;
@property (retain, nonatomic) NSMutableArray *resultDetourInfos;
@property (readonly, nonatomic) BOOL hasDefaultRelatedSearchSuggestion;
@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property (readonly, nonatomic) BOOL hasSearchClientBehavior;
@property (retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior;
@property (nonatomic) BOOL hasEnablePartialClientization;
@property (nonatomic) BOOL enablePartialClientization;
@property (retain, nonatomic) NSMutableArray *browseCategorys;
@property (readonly, nonatomic) BOOL hasCategorySearchResultSection;
@property (retain, nonatomic) GEOPDSCategorySearchResultSection *categorySearchResultSection;
@property (retain, nonatomic) NSMutableArray *relatedEntitySections;
@property (retain, nonatomic) NSMutableArray *searchTierMetadatas;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)browseCategoryType;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;
+ (Class)relatedEntitySectionType;
+ (Class)searchTierMetadataType;
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
- (void)addRelatedSearchSuggestion:(id)a0;
- (void)addResultDetourInfo:(id)a0;
- (void)addBrowseCategory:(id)a0;
- (void)addRelatedEntitySection:(id)a0;
- (void)addSearchTierMetadata:(id)a0;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)clearRelatedSearchSuggestions;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)a0;
- (unsigned long long)resultDetourInfosCount;
- (void)clearResultDetourInfos;
- (id)resultDetourInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)browseCategorysCount;
- (void)clearBrowseCategorys;
- (id)browseCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)relatedEntitySectionsCount;
- (void)clearRelatedEntitySections;
- (id)relatedEntitySectionAtIndex:(unsigned long long)a0;
- (unsigned long long)searchTierMetadatasCount;
- (void)clearSearchTierMetadatas;
- (id)searchTierMetadataAtIndex:(unsigned long long)a0;

@end
