@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _artworkIndexs;
    NSMutableArray *_artworkItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_artworkIndexs : 1; unsigned char read_artworkItems : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long artworkIndexsCount;
@property (readonly, nonatomic) unsigned int *artworkIndexs;
@property (retain, nonatomic) NSMutableArray *artworkItems;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)artworkItemType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addArtworkIndex:(unsigned int)a0;
- (void)addArtworkItem:(id)a0;
- (void)clearArtworkIndexs;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)artworkItemsCount;
- (void)clearArtworkItems;
- (id)artworkItemAtIndex:(unsigned long long)a0;
- (void)setArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)_maps_artworkIndicesAsString;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
