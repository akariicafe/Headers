@class NSString, GEOPDSearchTokenSet, PBDataReader;

@interface GEOPDSearchAttribute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_attributeId;
    NSString *_attributeValue;
    NSString *_name;
    GEOPDSearchTokenSet *_tokenSet;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _rankingOrder;
    BOOL _isOptionalAttribute;
    BOOL _isOptionalKeyword;
    BOOL _negateAttribute;
    struct { unsigned char has_rankingOrder : 1; unsigned char has_isOptionalAttribute : 1; unsigned char has_isOptionalKeyword : 1; unsigned char has_negateAttribute : 1; unsigned char read_attributeId : 1; unsigned char read_attributeValue : 1; unsigned char read_name : 1; unsigned char read_tokenSet : 1; unsigned char wrote_anyField : 1; } _flags;
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
