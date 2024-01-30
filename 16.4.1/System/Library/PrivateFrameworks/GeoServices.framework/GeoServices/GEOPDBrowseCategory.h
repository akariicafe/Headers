@class PBDataReader, NSString, GEOStyleAttributes, NSData, NSMutableArray, PBUnknownFields;

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

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
