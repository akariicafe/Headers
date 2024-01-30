@class GEOURLOptions, NSMutableArray, PBDataReader;

@interface GEOURLPresent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_items;
    GEOURLOptions *_options;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_items : 1; unsigned char read_options : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithOptions:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDirectionsOptions:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
