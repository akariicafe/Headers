@class NSString, GEOPDSearchQuerySynonymMetadata, PBDataReader;

@interface GEOPDSearchQueryDymMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_originalQuery;
    GEOPDSearchQuerySynonymMetadata *_synonymMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_originalQuery : 1; unsigned char read_synonymMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
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
