@class PBDataReader, NSString, GEOStyleAttributes, NSMutableArray, PBUnknownFields;

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
