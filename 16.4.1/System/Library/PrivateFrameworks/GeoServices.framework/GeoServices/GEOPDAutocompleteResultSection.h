@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _contentType;
    int _numVisibleResults;
    int _suggestionType;
    int _type;
    BOOL _enableMapsSuggestServerReranking;
    BOOL _enforceServerResultsOrder;
    BOOL _shouldInterleaveClientResults;
    struct { unsigned char has_contentType : 1; unsigned char has_numVisibleResults : 1; unsigned char has_suggestionType : 1; unsigned char has_type : 1; unsigned char has_enableMapsSuggestServerReranking : 1; unsigned char has_enforceServerResultsOrder : 1; unsigned char has_shouldInterleaveClientResults : 1; unsigned char read_unknownFields : 1; unsigned char read_entries : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
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
