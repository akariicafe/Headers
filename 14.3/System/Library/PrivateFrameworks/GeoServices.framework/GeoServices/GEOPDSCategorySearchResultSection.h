@class PBUnknownFields, NSString, PBDataReader, GEOStyleAttributes;

@interface GEOPDSCategorySearchResultSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayName;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _categorySearchResultSectionCellType;
    struct { unsigned char has_categorySearchResultSectionCellType : 1; unsigned char read_unknownFields : 1; unsigned char read_sectionHeaderDisplayName : 1; unsigned char read_sectionSubHeaderDisplayName : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSectionHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionHeaderDisplayName;
@property (readonly, nonatomic) BOOL hasSectionSubHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionSubHeaderDisplayName;
@property (nonatomic) BOOL hasCategorySearchResultSectionCellType;
@property (nonatomic) int categorySearchResultSectionCellType;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)categorySearchResultSectionCellTypeAsString:(int)a0;
- (int)StringAsCategorySearchResultSectionCellType:(id)a0;
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
