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

@property (retain, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) GEOURLOptions *options;

+ (Class)itemType;
+ (BOOL)isValid:(id)a0;

- (id)initWithOptions:(id)a0;
- (void)addItem:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)itemsCount;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDirectionsOptions:(id)a0;
- (id)jsonRepresentation;
- (void)clearItems;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
