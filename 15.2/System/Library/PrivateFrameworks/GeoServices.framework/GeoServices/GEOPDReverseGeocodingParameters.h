@class PBUnknownFields, NSMutableArray, PBDataReader;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_extendedLocations;
    NSMutableArray *_locations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeTypeLimit;
    BOOL _preserveOriginalLocation;
    struct { unsigned char has_placeTypeLimit : 1; unsigned char has_preserveOriginalLocation : 1; unsigned char read_unknownFields : 1; unsigned char read_extendedLocations : 1; unsigned char read_locations : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
