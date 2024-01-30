@class PBDataReader, GEOPDSearchRewrittenQueryNonPayloadField, NSMutableArray, GEOPDSearchQueryIntentMetadata;

@interface GEOPDSearchQueryIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_globalFeatureMaps;
    NSMutableArray *_globalStringFeatureMaps;
    GEOPDSearchQueryIntentMetadata *_queryIntentMetadata;
    GEOPDSearchRewrittenQueryNonPayloadField *_rewrittenQueryNonPayloadField;
    NSMutableArray *_whatIntents;
    NSMutableArray *_whereIntents;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_globalFeatureMaps : 1; unsigned char read_globalStringFeatureMaps : 1; unsigned char read_queryIntentMetadata : 1; unsigned char read_rewrittenQueryNonPayloadField : 1; unsigned char read_whatIntents : 1; unsigned char read_whereIntents : 1; unsigned char wrote_anyField : 1; } _flags;
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
