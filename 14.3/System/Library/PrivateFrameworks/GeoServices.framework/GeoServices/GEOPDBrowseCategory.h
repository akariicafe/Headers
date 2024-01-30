@class PBUnknownFields, NSString, PBDataReader, NSData, NSMutableArray, GEOStyleAttributes;

@interface GEOPDBrowseCategory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayString;
    NSString *_popularDisplayToken;
    NSString *_shortDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_subCategorys;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _displayMode;
    int _sortOrder;
    int _subCategoryType;
    BOOL _includeEvChargingParametersOnSearch;
    BOOL _isAllCategoryForVenue;
    BOOL _isSubCategorySameAsTopLevel;
    struct { unsigned char has_displayMode : 1; unsigned char has_sortOrder : 1; unsigned char has_subCategoryType : 1; unsigned char has_includeEvChargingParametersOnSearch : 1; unsigned char has_isAllCategoryForVenue : 1; unsigned char has_isSubCategorySameAsTopLevel : 1; unsigned char read_unknownFields : 1; unsigned char read_displayString : 1; unsigned char read_popularDisplayToken : 1; unsigned char read_shortDisplayString : 1; unsigned char read_styleAttributes : 1; unsigned char read_subCategorys : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasDisplayString;
@property (retain, nonatomic) NSString *displayString;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSMutableArray *subCategorys;
@property (readonly, nonatomic) BOOL hasShortDisplayString;
@property (retain, nonatomic) NSString *shortDisplayString;
@property (readonly, nonatomic) BOOL hasPopularDisplayToken;
@property (retain, nonatomic) NSString *popularDisplayToken;
@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL hasDisplayMode;
@property (nonatomic) int displayMode;
@property (nonatomic) BOOL hasSubCategoryType;
@property (nonatomic) int subCategoryType;
@property (nonatomic) BOOL hasIsSubCategorySameAsTopLevel;
@property (nonatomic) BOOL isSubCategorySameAsTopLevel;
@property (nonatomic) BOOL hasIncludeEvChargingParametersOnSearch;
@property (nonatomic) BOOL includeEvChargingParametersOnSearch;
@property (nonatomic) BOOL hasIsAllCategoryForVenue;
@property (nonatomic) BOOL isAllCategoryForVenue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)subCategoryType;
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
- (id)sortOrderAsString:(int)a0;
- (int)StringAsSortOrder:(id)a0;
- (void)addSubCategory:(id)a0;
- (void)clearSubCategorys;
- (unsigned long long)subCategorysCount;
- (id)subCategoryAtIndex:(unsigned long long)a0;
- (id)displayModeAsString:(int)a0;
- (int)StringAsDisplayMode:(id)a0;
- (id)subCategoryTypeAsString:(int)a0;
- (int)StringAsSubCategoryType:(id)a0;

@end
