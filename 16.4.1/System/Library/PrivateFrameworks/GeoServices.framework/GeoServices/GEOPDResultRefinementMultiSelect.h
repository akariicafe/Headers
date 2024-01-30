@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementMultiSelect : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayNameForMultiSelected;
    NSString *_displayName;
    NSString *_multiSelectIdentifier;
    NSMutableArray *_multiSelects;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _clauseType;
    unsigned int _maxNumSelectElements;
    BOOL _showEqualWidthButtonsOnFilterView;
    struct { unsigned char has_clauseType : 1; unsigned char has_maxNumSelectElements : 1; unsigned char has_showEqualWidthButtonsOnFilterView : 1; unsigned char read_unknownFields : 1; unsigned char read_displayNameForMultiSelected : 1; unsigned char read_displayName : 1; unsigned char read_multiSelectIdentifier : 1; unsigned char read_multiSelects : 1; unsigned char wrote_anyField : 1; } _flags;
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
