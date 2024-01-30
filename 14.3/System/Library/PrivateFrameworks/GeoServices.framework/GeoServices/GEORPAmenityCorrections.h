@class PBDataReader, PBUnknownFields;

@interface GEORPAmenityCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _addedAmenities;
    struct { int *list; unsigned long long count; unsigned long long size; } _removedAmenities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addedAmenities : 1; unsigned char read_removedAmenities : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long addedAmenitiesCount;
@property (readonly, nonatomic) int *addedAmenities;
@property (readonly, nonatomic) unsigned long long removedAmenitiesCount;
@property (readonly, nonatomic) int *removedAmenities;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)addAddedAmenities:(int)a0;
- (void)addRemovedAmenities:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearAddedAmenities;
- (int)addedAmenitiesAtIndex:(unsigned long long)a0;
- (void)clearRemovedAmenities;
- (int)removedAmenitiesAtIndex:(unsigned long long)a0;
- (void)setAddedAmenities:(int *)a0 count:(unsigned long long)a1;
- (id)addedAmenitiesAsString:(int)a0;
- (int)StringAsAddedAmenities:(id)a0;
- (void)setRemovedAmenities:(int *)a0 count:(unsigned long long)a1;
- (id)removedAmenitiesAsString:(int)a0;
- (int)StringAsRemovedAmenities:(id)a0;
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
