@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookups;
    NSMutableArray *_spatialPlaceLookups;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_spatialEventLookups : 1; unsigned char read_spatialPlaceLookups : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *spatialPlaceLookups;
@property (retain, nonatomic) NSMutableArray *spatialEventLookups;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)spatialPlaceLookupType;
+ (Class)spatialEventLookupType;
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
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addSpatialPlaceLookup:(id)a0;
- (void)addSpatialEventLookup:(id)a0;
- (unsigned long long)spatialPlaceLookupsCount;
- (void)clearSpatialPlaceLookups;
- (id)spatialPlaceLookupAtIndex:(unsigned long long)a0;
- (unsigned long long)spatialEventLookupsCount;
- (void)clearSpatialEventLookups;
- (id)spatialEventLookupAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;

@end
