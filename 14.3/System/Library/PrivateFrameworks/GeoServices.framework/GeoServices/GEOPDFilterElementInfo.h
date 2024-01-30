@class PBDataReader, GEOPDVenueLabel, NSMutableArray, PBUnknownFields;

@interface GEOPDFilterElementInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterIds;
    GEOPDVenueLabel *_label;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_filterIds : 1; unsigned char read_label : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *filterIds;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)filterIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addFilterId:(id)a0;
- (unsigned long long)filterIdsCount;
- (void)clearFilterIds;
- (id)filterIdAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
