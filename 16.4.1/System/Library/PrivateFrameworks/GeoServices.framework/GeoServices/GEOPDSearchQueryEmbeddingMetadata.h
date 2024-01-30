@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryEmbeddingMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { float *list; unsigned long long count; unsigned long long size; } _embeddings;
    NSString *_embeddingId;
    NSMutableArray *_modelVersions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_embeddings : 1; unsigned char read_embeddingId : 1; unsigned char read_modelVersions : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
