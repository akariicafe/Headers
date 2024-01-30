@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDPublisherViewResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
    NSMutableArray *_resultFilters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_collectionIds : 1; unsigned char read_resultFilters : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *resultFilters;
@property (retain, nonatomic) NSMutableArray *collectionIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)resultFilterType;
+ (Class)collectionIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)collectionIdsCount;
- (void)addResultFilter:(id)a0;
- (void)addCollectionId:(id)a0;
- (unsigned long long)resultFiltersCount;
- (void)clearResultFilters;
- (id)resultFilterAtIndex:(unsigned long long)a0;
- (void)clearCollectionIds;
- (id)collectionIdAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
