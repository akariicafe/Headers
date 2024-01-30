@class PBUnknownFields, NSString, PBDataReader, NSMutableArray, GEOStyleAttributes;

@interface GEOPDSSearchResultSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_resolvedItems;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayName;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _searchResultSectionCellType;
    int _searchResultSectionType;
    struct { unsigned char has_searchResultSectionCellType : 1; unsigned char has_searchResultSectionType : 1; unsigned char read_unknownFields : 1; unsigned char read_resolvedItems : 1; unsigned char read_sectionHeaderDisplayName : 1; unsigned char read_sectionSubHeaderDisplayName : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSectionHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionHeaderDisplayName;
@property (retain, nonatomic) NSMutableArray *resolvedItems;
@property (nonatomic) BOOL hasSearchResultSectionType;
@property (nonatomic) int searchResultSectionType;
@property (readonly, nonatomic) BOOL hasSectionSubHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionSubHeaderDisplayName;
@property (nonatomic) BOOL hasSearchResultSectionCellType;
@property (nonatomic) int searchResultSectionCellType;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)resolvedItemType;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addResolvedItem:(id)a0;
- (unsigned long long)resolvedItemsCount;
- (void)clearResolvedItems;
- (id)resolvedItemAtIndex:(unsigned long long)a0;
- (id)searchResultSectionTypeAsString:(int)a0;
- (int)StringAsSearchResultSectionType:(id)a0;
- (id)searchResultSectionCellTypeAsString:(int)a0;
- (int)StringAsSearchResultSectionCellType:(id)a0;
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
