@class PBDataReader, GEOPDEntity, GEOPDPlaceInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDLinkedService : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDEntity *_entity;
    NSMutableArray *_hours;
    GEOPDPlaceInfo *_placeInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_entity : 1; unsigned char read_hours : 1; unsigned char read_placeInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)linkedServicesForPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
